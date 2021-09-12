#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(int m):Queue(m)
{
	priority = new int[maxLength];
}

PriorityQueue::~PriorityQueue()
{
	if (priority != nullptr)delete[] priority;
}

void PriorityQueue::printQueue() const
{
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << " " << queue[i] << " with priority " << priority[i] << endl;
	}
}

void PriorityQueue::addElem(int elem, int pri)
{
	if (!isFull())
	{
		queue[length] = elem;
		priority[length++] = pri;
	}
	else cout << "Queue is full!" << endl;
}

int PriorityQueue::extractElem()
{
	if (!isEmpty())
	{
		int max_pri = priority[0];
		int max_pri_index = 0;
		for (int i = 0; i < length; i++)
		{
			if (priority[i] > max_pri)
			{
				max_pri = priority[i];
				max_pri_index = i;
			}
		}
		int temp = queue[max_pri_index];
		length--;
		for (int i = max_pri_index; i < length; i++)
		{
			queue[i] = queue[i + 1];
			priority[i] = priority[i + 1];
		}
		return temp;
	}
	else
	{
		cout << "Queue is empty!" << endl;
		return -1;
	}
}
