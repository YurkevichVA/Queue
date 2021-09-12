#include "Queue.h"

Queue::Queue(int m)
{
	maxLength = m;

	queue = new int[maxLength];

	length = 0;
}

void Queue::clear()
{
	length = 0;
}

Queue::~Queue()
{
	if (queue != nullptr)delete[] queue;
}

void Queue::addElem(int elem)
{
	if (!isFull())queue[length++] = elem;
	else cout << "Queue is full!" << endl;
}

int Queue::extractElem()
{
	if (!isEmpty())
	{
		int temp = queue[0];
		length--;
		for (int i = 0; i < length; i++)
		{
			queue[i] = queue[i + 1];
		}
		return temp;
	}
	else
	{
		cout << "Queue is empty!" << endl;
		return -1;
	}
}

bool Queue::isEmpty() const
{
	return length == 0;
}

bool Queue::isFull() const
{
	return length == maxLength;
}

int Queue::getCount() const
{
	return length;
}

void Queue::printQueue() const
{
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << " " << queue[i] << endl;
	}
}
