#pragma once

#include "Queue.h"

class RingQueue: public Queue
{
public:
	// ctor
	RingQueue(int m);
	// dctor
	~RingQueue();
	// extract elem
	int extractElem();
};

