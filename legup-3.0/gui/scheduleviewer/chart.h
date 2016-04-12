/*
 * chart.h
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */

#ifndef CHART_H_
#define CHART_H_

#include <QtGui>
#include "block.h"

class Chart: public QGraphicsView {
	Q_OBJECT
public:
	Chart(QWidget *parent);
	Chart(QTreeWidget *taskView);
	Chart();
	~Chart();
	QSize minimumSizeHint() const;
	QSize sizeHint() const;
	//void paintEvent(QPaintEvent *);
  void setBlock(Block * block);
  void updateView(Block * block);
  void updateView();
protected:
	//void mouseMoveEvent (QMouseEvent * event );
	//void mousePressEvent (QMouseEvent * event );
  void resizeEvent(QResizeEvent *event);

public slots:
  void setScrollBarValue(int value);
	//void redraw(int height);

private:
	QTreeWidget *m_taskView;
  Block * m_block;
  Block *m_previousBlock;
  int m_oldWidth;
  int m_rowHeight;
};

#endif /* CHART_H_ */
