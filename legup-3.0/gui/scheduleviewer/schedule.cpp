/*
 * schedule.cpp
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */

#include "schedule.h"
#include "iostream"
#include "scheduleitem.h"

Schedule::Schedule() {
	//constructor do not construct a data model because at this point there's
	//no data available yet.
	//data initilization is done in init();
}

Schedule::~Schedule() {
	// TODO Auto-generated destructor stub
}

int Schedule::init(QFile *file) {
	QString line;
	int basicBlock = 0;
	int beginState = 0;
	int endState = 0;
  int insnCount = 0;
	QString insn;
  if(!file)
    return 0;
	QTextStream in(file);
	Function * function = NULL;

  clear();
	m_functions.clear();

	Block * block = NULL;
	while (!in.atEnd()) {
		int pos = 0;
		int posEqual;
		line = in.readLine();
		QRegExp rxStartFunc("^Start Function: (\\w+)");
		QRegExp rxEndFunc("^End Function: (\\w+)");
		QRegExp rxFunctionCall("call.*@(\\w+)\\(");
		QRegExp rxLoad("load");
		QRegExp rxStateBegin("^state.*BB_?(\\d+)_(\\d+)$");
		QRegExp rxStateEnd("^(.*)\\(endState.*_(\\d+)\\)");
		QRegExp rxRegisters("%([0-9a-zA-Z_]+)");
		QRegExp rxEqual("=");
		QRegExp rxBr("br label %(\\d+)");
    

		if (rxStartFunc.indexIn(line, 0) != -1) {
			QString functionName = rxStartFunc.cap(1);
			function = new Function(functionName);
			m_functions.push_back(function);
			//qDebug() << functionName << endl;
		}
    else if (rxStateBegin.indexIn(line, 0) != -1) {
			//assert(function!=NULL);
      if(function == NULL){
        continue;
      }
			basicBlock = rxStateBegin.cap(1).toInt();
			beginState = rxStateBegin.cap(2).toInt();
			block = function->findBlock(basicBlock);
			if (block == NULL) {
				block = new Block(basicBlock);
				function->insertBlock(block);
			}
		}
    
    else if (rxStateEnd.indexIn(line, 0) != -1) {
			//assert(block != NULL);
      if(block == NULL){
        continue;
      }
			insn = rxStateEnd.cap(1).trimmed();
			//int BBNum = rxStateEnd.cap(2).toInt();
			//assert(BBNum == basicBlock);
      endState = rxStateEnd.cap(2).toInt();
      if (rxLoad.indexIn(line, 0) != -1) {
        //special case for load instruction
        endState -- ;
      }
			if (!insn.isEmpty()) {
        insnCount ++;
				Task *task = new Task(insn, basicBlock, beginState, endState);
				block->insertTask(task);

        if (rxFunctionCall.indexIn(line, 0) != -1) {
          /*function calls*/
					//qDebug << "function " << function->m_name<< " is calling "
           // << rxFunctionCall.cap(1)<< endl;
          task->m_type = CALL;
					function->m_callee.push_back(rxFunctionCall.cap(1));
        }
        else if (rxBr.indexIn(line, 0) != -1) {
          /*branch instructions*/
          //qDebug() << "branch destination of instruction " << function->m_name << line<< " is " << rxBr.cap(1) << endl;
          task->m_type = BR;
          block->m_branch = rxBr.cap(1).toInt();
        }
        posEqual = rxEqual.indexIn(line, 0);

        /*checking dependencies*/
				while ((pos = rxRegisters.indexIn(line, pos)) != -1) {
          if (pos < posEqual){
            //qDebug() << "output " << rxRegisters.cap(1) << endl;
            QString destination = rxRegisters.cap(1);
            task->m_destination = destination;
          }
					else{
            //case where a register appear on the right side of
            //an equal size: this is a source operand
            //qDebug() << "input for instruction" 
             // << line << " is "
              //<< rxRegisters.cap(1)<< endl;
            QString source = rxRegisters.cap(1);
            task->m_sources.push_back(source);
          }

					pos += rxRegisters.matchedLength();

				}
			}

		}
    else if (rxEndFunc.indexIn(line, 0) != -1) {
		}
    else {
      //qDebug() << line << endl;
    }
	}


	/*construct control flow graph*/
	for (int k = 0; k < m_functions.size(); k++) {
			Function * function = m_functions[k];
			for(int j = 0; j < (int)function->m_blocks.size(); j++)
			{
				Block * block = function->m_blocks[j];
				assert(block);
				for(int i = 0; i < (int)function->m_blocks.size(); i++)
				{
					if(i == j || function->m_blocks[i]->m_tasks.empty())
						continue;
					//printf("trying to match branch %d to register %d\n",function->m_blocks[j]->m_branch,
						//	function->m_blocks[i]->m_tasks[0]->m_destination);
          bool ok;
					if(function->m_blocks[i]->m_tasks[0]->m_destination.toInt(&ok)
							== block->m_branch+1 && ok){
            //TODO get rid of this hack after branch destination
            //block is available
						block->m_targetBlock = function->m_blocks[i];
						//printf("destination match:  from BB %d to BB %d for function %s", block->m_index,
								//function->m_blocks[i]->m_index, function->m_name.toStdString().c_str());
            //printf("because the branch destination is %d, and the output register of the current BB is %d\n",
                //block->m_branch, function->m_blocks[i]->m_tasks[0]->m_destination);
					}
				}
			}
	}

	/*construct data model*/
  /* now, ScheduleItem inherts QStandardItem.
  * Function, Block both inherts ScheduleItem,
  * so we do not need to create new object for these items,
  * just use them */
	QStandardItem *rootItem = invisibleRootItem();
	for (int k = 0; k < m_functions.size(); k++) {
		Function * function = m_functions[k];
		//QStandardItem *functionItem = new ScheduleItem(function->getName());
		QStandardItem *functionItem = function;
		functionItem->setFlags(functionItem->flags() & ~Qt::ItemIsEditable);
		rootItem->appendRow(functionItem);
		//QStandardItem *parentItem = item;
		for (int i = 0; i < (int)function->m_blocks.size(); i++) {
			Block *block = function->m_blocks[i];
			QStandardItem *blockItem;
			//blockItem= new ScheduleItem(block->text());
			blockItem= block; 
			blockItem->setFlags(blockItem->flags() & ~Qt::ItemIsEditable);
			functionItem->appendRow(blockItem);
			//cout << "Basic Block: " << block->getIndex() << endl;
      /* we don't need to create child task item anymore since
       * 1. we don't need to display them in the explorer
       * 2. tasks can be accessed through the m_tasks member variable
       */

			/*for (int j = 0; j < block->getNumTasks(); j++) {
				QStandardItem *taskItem_insn = new ScheduleItem(
						block->getTask(j)->m_insn);
				QStandardItem *taskItem_begin = new ScheduleItem(
						QString::number(block->getTask(j)->m_beginState));
				QStandardItem *taskItem_end = new ScheduleItem(
						QString::number(block->getTask(j)->m_endState));
				QList<QStandardItem *> list;
				list << taskItem_insn << taskItem_begin << taskItem_end;
				blockItem->appendRow(list);
				//taskItem->setFlags(taskItem->flags() & ~Qt::ItemIsEditable);
				//qDebug() << "\tInstruction: "
				//	<< block->getTask(j)->m_insn
				//<< "column count" << blockItem->columnCount() << endl;
			}
      */
		}
	}

  //process instruction dependencies
	for (int k = 0; k < m_functions.size(); k++) {
			Function * function = m_functions[k];
			for(int j = 0; j < (int)function->m_blocks.size(); j++)
			{
				Block * block = function->m_blocks[j];
        for(int k = 0; k < (int)block->m_tasks.size(); k++){
          for(int m = 0; m < (int)block->m_tasks.size(); m++){
            if(k == m) continue;
            if(block->m_tasks[m]->m_sources.contains(block->m_tasks[k]->m_destination)){
              block->m_tasks[k]->m_dependent.push_back(block->m_tasks[m]);
              block->m_tasks[m]->m_depending.push_back(block->m_tasks[k]);
            }

          }
        }
      }
  }

	setHeaderData(0, Qt::Horizontal, "Explorer");
	return 0;
}


Function *
Schedule::findFunction(QString &name) const
{
  for( int j = 0; j < m_functions.size(); j++){
    if(m_functions[j]->m_name == name)
      return m_functions[j];
  }
  return NULL;
}
