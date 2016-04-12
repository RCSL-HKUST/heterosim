/*
 * block.h
 *
 *  Created on: Oct 29, 2012
 *      Author: johnqin
 */

#ifndef BLOCK_H_
#define BLOCK_H_
#include "task.h"
#include "common.h"
#include <vector>

using namespace std;

class Block : public ScheduleItem {
public:
	//Block();
  Block(int index);
	~Block();

  int getIndex();
  int getSize(){
    return m_tasks.size();
  }
  int getNumTasks(){
    return getSize();
  }
  Task *getTask(int index) const; 
  void insertTask(Task *task);

public:
	vector <Task*> m_tasks;
	//TODO support for multiple destinations
	//vector <Block *> m_destinations;
	Block * m_targetBlock;
	//vector <int> m_branches;
	int m_branch;//TODO get rid of this after target block available
 	int m_index;
};

#endif /* BLOCK_H_ */
