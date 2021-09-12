#pragma once

#include "Queue.h"

class PriorityQueue:public Queue
{
	int* priority = nullptr;
public:
	// ctor
	PriorityQueue(int m);
	// dctor
	~PriorityQueue();
	// print queue
	void printQueue()const;
	// add elem to queue
	void addElem(int elem, int pri);
	// extract elem
	int extractElem();
};

