/*
 * task.cpp
 *
 *  Created on: Sep 30, 2012
 *      Author: johnqin
 */

#include "task.h"

Task::Task(QString insn, int BB, int beginState, int endState)
		:ScheduleItem(insn), m_insn(insn), m_BB(BB), m_beginState(beginState), m_endState(endState)
{
  m_destination = -2;
  m_type = OTHER;
}

Task::~Task() {
	// TODO Auto-generated destructor stub
}

