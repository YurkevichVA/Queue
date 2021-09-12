#pragma once

#include "Queue.h"

class RingQueue: virtual public Queue
{
public:
	// ctor
	RingQueue(int m);
	// extract elem
	int extractElem();
};

