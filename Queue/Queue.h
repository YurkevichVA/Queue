#pragma once

#include <iostream>

using namespace std;

class Queue
{
protected:
	int* queue = nullptr;

	int maxLength = 0;

	int length = 0;

public:
	// ctor
	Queue(int m);
	// clear queue
	void clear();
	// dctor
	~Queue();
	// add elem to queue
	void addElem(int elem);
	// extract elem
	int extractElem();
	// is empty
	bool isEmpty()const;
	// is full
	bool isFull()const;
	// element count
	int getCount()const;
	// print queue
	void printQueue()const;
};

