/*
 * model.h
 *
 *  Created on: Nov 7, 2012
 *      Author: johnqin
 */

#ifndef MODEL_H_
#define MODEL_H_

#include <function.h>
#include <QtGui>

class Model: public QStandardItemModel {

public:
	Model();
	/*Model(vector <Function*> &functions, QObject *parent = 0)
	         : QStandardItemModel(parent), m_functions(functions) {}
	     int rowCount(const QModelIndex &parent = QModelIndex()) const;
	     QVariant data(const QModelIndex &index, int role) const;
	     //QVariant headerData(int section, Qt::Orientation orientation,
	       //                  int role = Qt::DisplayRole) const;	        */
	~Model();
	//setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole);
//private:
	//vector <Function*> m_functions;
};

#endif /* MODEL_H_ */

