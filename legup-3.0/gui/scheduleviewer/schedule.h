/*
 * schedule.h
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */

#ifndef SCHEDULE_H_
#define SCHEDULE_H_

#include <QtCore>
#include "model.h"
#include "task.h"
#include "block.h"
#include "function.h"


using namespace std;

class Schedule : public QStandardItemModel{
public:
	Schedule();
  int insertFunction(int basicBlock);
  Function* findFunction(QString &name) const;
	~Schedule();
	int init(QFile *file);
public:
  QList <Function*> m_functions;
  QMap<QString, Function> m_functionHash;

	friend class ScheduleView;

};

#endif /* SCHEDULE_H_ */
