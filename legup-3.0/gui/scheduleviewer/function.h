/*
 * function.h
 *
 *  Created on: Nov 7, 2012
 *      Author: johnqin
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_

#include "QtCore"
#include <QStandardItemModel>
#include "block.h"

class Function : public ScheduleItem{
public:
	Function();
	Function(QString name);
  int getSize(){
    return m_blocks.size();
  }
	QString getName() const{
		return m_name;
	}
  ~Function();
  void insertBlock(Block *block);
  Block *findBlock(int basicBlock);
  vector <Block*> m_blocks;
  vector <QString> m_callee;
  QString m_name;
};

#endif /* FUNCTION_H_ */
