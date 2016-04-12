/*
 * Viewer.h
 *
 *  Created on: Sep 23, 2012
 *      Author: johnqin
 */

#ifndef VIEWER_H_
#define VIEWER_H_

#include <QtGui>
#ifdef DISPLAY_GRAPHS 
#include "gvgraph.h"
#include "functionitem.h"
#endif

#include "scheduleview.h"
#include "schedule.h"
#include "explorer.h"
#include "function.h"

class Viewer: public QMainWindow {
	Q_OBJECT

public:
	Viewer(int argc, char *argv[]);
	~Viewer(){}

private:
#ifdef DISPLAY_GRAPH
	void buildCallGraph();
#endif

private slots:
	void open();
	void open(QString filename);
	void save();
	void quit();


	void currentSelected(QModelIndex modelIndex);

private:

	QAction *m_openAction;
	QAction *m_saveAction;
	QAction *m_exitAction;

	QMenu *m_fileMenu;
	QStatusBar *m_statusBar;
	QSplitter *m_splitter;

	int m_BBTab;
	int m_scheduleTab;
  int m_functionTab;
  int m_reportTab;

	QTabWidget *m_tabBar;

	QTextEdit *m_textEdit;
	ScheduleView *m_scheduleView;

	Schedule *m_schedule;
	Explorer *m_explorer;

  /*Call graph and control graph*/
	QGraphicsScene *m_functionScene;
	QGraphicsView *m_functionView;
#ifdef	DISPLAY_GRAPHS 
	GVGraph *m_functionGraph;
#endif
	QGraphicsView *m_BBView;

	friend class Schedule;
};

#endif /* VIEWER_H_ */
