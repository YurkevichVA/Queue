#pragma once

#include "Queue.h"

class PriorityQueue:public Queue
{
	int* priority;
public:
	//ctor
	PriorityQueue(int m);
};

