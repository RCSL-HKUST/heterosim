/*
 * block.cpp
 *
 *  Created on: Oct 29, 2012
 *      Author: johnqin
 */

#include "block.h"

//Block::Block() {
//}

Block::Block(int index):
  ScheduleItem(QString("BB %1").arg(index)),
  m_index(index){
	m_targetBlock = NULL;
  m_branch = -5;
}

Block::~Block() {
}

 int 
Block::getIndex(){
  return m_index;
}

 Task* 
Block::getTask(int index) const{
  assert(index < (int)m_tasks.size());
  return m_tasks[index];
}

void 
Block::insertTask(Task *task){
  m_tasks.push_back(task);
}
