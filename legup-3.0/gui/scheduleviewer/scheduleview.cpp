/*
 * scheduleview.cpp
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */
#include <QtGui>
#include <QtCore>
#include "assert.h"
#ifdef DISPLAY_GRAPHS 
#include "gvc.h"
#endif
#include "scheduleview.h"
#include "chart.h"
#include "common.h"
#include "bargraphicsitem.h"

using namespace std;

ScheduleView::ScheduleView(QWidget *parent) :
		QWidget(parent) {

	//constructor constructs the the geometr, but not data

	m_schedule = NULL;
  m_block = NULL;
	m_splitter = new QSplitter();
	m_taskView = new TaskView();
	m_chart = new Chart(m_taskView);
  m_chartScene = new QGraphicsScene();
	m_chartScrollArea = new QScrollArea();

  m_chart->setScene(m_chartScene);
  m_chart->setAlignment(Qt::AlignLeft | Qt::AlignTop);
  m_chart->show();

	//scrollArea->setBackgroundRole(QPalette::Dark);
	//m_chartScrollArea->setWidget(m_chart);

	m_splitter->addWidget(m_taskView);
	//m_splitter->addWidget(m_chartScrollArea);
	m_splitter->addWidget(m_chart);

  //syncronize the scrollbar, need to adjust the scroll value
	m_chart->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	connect(m_taskView->verticalScrollBar(), SIGNAL(valueChanged(int)), m_chart, SLOT(setScrollBarValue(int)));
	/*connect(m_taskView, SIGNAL(itemExpanded(QTreeWidgetItem *)),m_taskView, SLOT(itemChangedSlot(QTreeWidgetItem *)));
	connect(m_taskView, SIGNAL(itemCollapsed(QTreeWidgetItem *)),m_taskView, SLOT(itemChangedSlot(QTreeWidgetItem *)));
	connect(m_taskView, SIGNAL(itemExpanded(QTreeWidgetItem *)),this, SLOT(itemChangedSlot(QTreeWidgetItem *)));
	connect(m_taskView, SIGNAL(itemCollapsed(QTreeWidgetItem *)),this, SLOT(itemChangedSlot(QTreeWidgetItem *)));
  */
	//connect(m_taskView, SIGNAL(itemChanged(int)),m_chart, SLOT(redraw(int)));
	//set size for the taskView
	//set a non-zero for the size of the chart, then
	//it will be automatically resized based on window size
	QList<int> sizes;
	sizes.append(200);
	sizes.append(650);
	m_splitter->setSizes(sizes);
	//m_taskView->setText(0, tr("ok"));
	QStringList labels;
	labels << tr("Instruction");// << tr("Start") << tr("End");

	m_taskView->setHeaderLabels(labels);
	//m_taskView->header()->resizeSection(0, 200);
	//m_taskView->header()->resizeSection(1, 50);
	//m_taskView->header()->resizeSection(2, 50);

	//construct vertical layout
	//horizontal layout is done by the splitter
	QVBoxLayout *vlayout = new QVBoxLayout(this);
	vlayout->addWidget(m_splitter);

	setLayout(vlayout);
}

ScheduleView::~ScheduleView()
{
}

void
ScheduleView::setData(QStandardItem *item) {
	assert(item);
	//m_schedule = schedule;
  m_block = (Block*)item;
  m_chart->setBlock(m_block);
  m_taskView->setBlock(m_block);
  m_taskView->updateView();
  m_chart->updateView();
}


