/*
 * Viewer.cpp
 *
 *  Created on: Sep 23, 2012
 *      Author: johnqin
 */

#include "viewer.h"

Viewer::Viewer(int argc, char *argv[]) {
#ifdef DISPLAY_GRAPHS 
	m_functionGraph = NULL;
#endif
	//Set size
	resize(1000, 600);
	//Set Menu and connect the slots
	m_openAction = new QAction(tr("&Open"), this);
	m_saveAction = new QAction(tr("&Save"), this);
	m_exitAction = new QAction(tr("E&xit"), this);

	connect(m_openAction, SIGNAL(triggered()), this, SLOT(open()));
	connect(m_saveAction, SIGNAL(triggered()), this, SLOT(save()));
	connect(m_exitAction, SIGNAL(triggered()), this, SLOT(quit()));

	m_fileMenu = menuBar()->addMenu(tr("&File"));
	m_fileMenu->addAction(m_openAction);
	//m_fileMenu->addAction(m_saveAction); //save not supported yet
	m_fileMenu->addSeparator();
	m_fileMenu->addAction(m_exitAction);

	//Set Status Bar
	m_statusBar = statusBar();
	m_statusBar->showMessage("LegUp Schedule Viewer");

	m_splitter = new QSplitter();

	m_explorer = new Explorer();
	m_tabBar = new QTabWidget();

	m_textEdit = new QTextEdit();
	m_textEdit->setReadOnly(true);

	m_scheduleView = new ScheduleView();
	m_functionScene = new QGraphicsScene();
	m_functionView = new QGraphicsView(m_functionScene);

	m_BBView = new QGraphicsView();
	//m_reportTab = m_tabBar->addTab(m_textEdit, "Schedule Report");
	m_scheduleTab = m_tabBar->addTab(m_scheduleView, "Schedule Chart");
#ifdef DISPLAY_GRAPHS
	m_functionTab = m_tabBar->addTab(m_functionView, "Call Graph");
	m_BBTab = m_tabBar->addTab(m_BBView, "Control Flow Graph");
#endif

	setCentralWidget(m_splitter);

	m_tabBar->setCurrentIndex(m_functionTab);

	m_splitter->addWidget(m_explorer);
	m_splitter->addWidget(m_tabBar);

	setWindowTitle(tr("Schedule Viewer"));

  m_schedule = new Schedule();

	if (argc > 1) {
		open(QString(argv[1]));
	}

	connect(m_explorer, SIGNAL(currentSelected(QModelIndex)), this,
      SLOT(currentSelected(QModelIndex)));

  return;
}

void Viewer::open() {
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
			tr("Scheduling Reports (*.rpt);;Text Files (*.txt)"));
	open(fileName);
}


void Viewer::open(QString fullName) {

	if (fullName != "") {
		QFile file(fullName);
		if (!file.open(QIODevice::ReadOnly)) {
			QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
			return;
		}
		if (m_schedule->init(&file) == 0) {
			QItemSelectionModel *old_model = m_explorer->selectionModel();
			m_explorer->setModel(m_schedule);
			m_explorer->update();
      m_explorer->expandAll();
      QFileInfo pathInfo(fullName);
      QString name(pathInfo.fileName());
	    setWindowTitle((tr("Schedule Viewer").append("\t-  ").append(name)));
			//delete old_model;
		}
		QTextStream in(&file);
		in.seek(0);
		m_textEdit->setText(in.readAll());
		file.close();

#ifdef DISPLAY_GRAPHS
		buildCallGraph();
#endif

	}
}

void Viewer::save() {
	QMessageBox::warning(this, "", "Saving files not supported yet");
}

void Viewer::quit() {
		qApp->quit();
}

void Viewer::currentSelected(QModelIndex index) {
	QStandardItem *item = m_schedule->itemFromIndex(index);
  /* the following is a terrible way of checking 
   * if this node is a Basic Block node. This will be improved
   * when we use a custom model, with custom item type instead
   * of qstandarditem, and emded an item type in it.*/
	if (item->parent())
		if (item->parent()->parent() == NULL) {
			m_scheduleView->setData(item);
		}
}

#ifdef DISPLAY_GRAPH
void Viewer::buildCallGraph()
{
	//clear old stuff
			assert(m_functionScene != NULL);
			QList<QGraphicsItem *> list = m_functionScene->items();
			QList<QGraphicsItem *>::Iterator it = list.begin();
			for (; it != list.end(); ++it) {
				if (*it) {
					m_functionScene->removeItem(*it);
					delete *it;
				}
			}
			if (m_functionGraph)
				delete m_functionGraph;

			//build new stuff;
			m_functionGraph = new GVGraph("Function Graph");

			for (int i = 0; i < m_schedule->m_functions.size(); i++) {
				QString sourceName = m_schedule->m_functions[i]->getName();
				m_functionGraph->addNode(sourceName);
				//cout << sourceName.toStdString() << endl;
				for (int j = 0; 
            j < (int)m_schedule->m_functions[i]->m_callee.size();
						j++) {
					QString targetName = m_schedule->m_functions[i]->m_callee[j];
					m_functionGraph->addNode(targetName);
					m_functionGraph->addEdge(sourceName, targetName);
				}
			}
      m_functionGraph->applyLayout();

      QList<GVNode> nodes = m_functionGraph->nodes();
      QList<GVEdge> edges = m_functionGraph->edges();
      for (int i = 0; i < nodes.size(); i++) {
        Function * function = m_schedule->findFunction(nodes[i].name);
        FunctionItem *node = new FunctionItem(function, m_BBView, m_tabBar,m_BBTab,
            m_scheduleTab, m_schedule, m_scheduleView);
        node->setRect(nodes[i].centerPos.x() - 20, nodes[i].centerPos.y() - 25,
            nodes[i].width, nodes[i].height);
        QGraphicsTextItem *textItem = new QGraphicsTextItem(nodes[i].name);
        //textItem->setPos(nodes[i].centerPos);
        textItem->setX(nodes[i].centerPos.x()-15);
        textItem->setY(nodes[i].centerPos.y()-15);
        m_functionScene->addItem(textItem);

				/*cout << nodes[i].name.toStdString() << nodes[i].centerPos.x()
						<< nodes[i].centerPos.y() << nodes[i].width
						<< nodes[i].height << endl;*/
				m_functionScene->addItem(node);
			}
			for (int i = 0; i < edges.size(); i++) {
				QPainterPath *pathItem = new QPainterPath(edges[i].path);
				m_functionScene->addPath(*pathItem);
			}
			m_functionScene->setSceneRect(m_functionGraph->boundingRect());
			m_functionView->show();

}
#endif
