#include "RingQueue.h"

RingQueue::RingQueue(int m):Queue(m)
{

}

RingQueue::~RingQueue()
{
	if (queue != nullptr)delete[] queue;
}

int RingQueue::extractElem()
{
	if (!isEmpty())
	{
		int temp = queue[0];
		for (int i = 0; i < length - 1; i++)
		{
			queue[i] = queue[i + 1];
		}
		queue[length - 1] = temp;
		return temp;
	}
	else
	{
		cout << "Queue is empty!" << endl;
		return -1;
	}
}