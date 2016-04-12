/*
 * scheduleview.h
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */

#ifndef SCHEDULEVIEW_H_
#define SCHEDULEVIEW_H_

#undef DISPLAY_GRAPHS 

#include "vector"
#include "QtGui"
#include "chart.h"
#include "task.h"
#include "schedule.h"
#include "taskview.h"

/*this class should only set up its sub views, which are
 * the taskView and the Chart, and connect the signals and
 * slot, and do syncronization between them
 * It should not do anything else like data initialization,
 * or drawing, even though it's tempting because this class
 * functions as a higher-level module and interfaces with 
 * other modules.
 * For the moment, we pass the pointer of the m_taskView
 * to m_chart, so that m_chart can figure draw its retangles
 * aligned to Qt's default QTreeView dimensions
 */

using namespace std;

class ScheduleView: public QWidget {
	Q_OBJECT

public:
	ScheduleView(QWidget *parent = NULL);
	~ScheduleView();
	void setData(QStandardItem *item);

public slots:
	void itemChangedSlot(QTreeWidgetItem *item)
	{
    //to be implemented;
	}
signals:
	void taskScrollChangedSignal(int value);
	void chartScrollChangedSignal(int value);
private:
	QSplitter *m_splitter;
	TaskView *m_taskView;
	Chart *m_chart;
  QGraphicsScene *m_chartScene;
	QScrollArea *m_chartScrollArea;
	Schedule *m_schedule;


  Block * m_block;
};

#endif /* SCHEDULEVIEW_H_ */
