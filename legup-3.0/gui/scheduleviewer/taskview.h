/*
 * tasklist.h
 *
 *  Created on: Oct 7, 2012
 *      Author: johnqin
 */

#ifndef TASKLIST_H_
#define TASKLIST_H_

#include "QtGui"
#include <qtreewidget.h>
#include "block.h"

class TaskView: public QTreeWidget {
	Q_OBJECT
public:
	TaskView();
	~TaskView();
	QSize minimumSizeHint() const;
	QSize sizeHint() const;
  void setBlock(Block * block);
  void updateView();

public slots:
	void itemChangedSlot(QTreeWidgetItem *);
signals:
	void itemChanged(int newValue);

private:
  Block *m_block;

};

#endif /* TASKLIST_H_ */
