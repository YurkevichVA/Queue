#include "Queue.h"
#include "RingQueue.h"
#include "PriorityQueue.h"

#include <ctime>

int main()
{
	srand(time(0));

	PriorityQueue QUP(25);

	// fill part of queue

	for (int i = 0; i < 5; i++) 
	{

		// for elements from 0 to 99 (including)
		// for priority from 0 to 11 (including)

		QUP.addElem(rand() % 100, rand() % 12);
	}
	// print queue

	QUP.printQueue();

	// extraxt elem

	cout << endl;

	cout << QUP.extractElem();

	cout << endl << endl;

	// printQueue

	QUP.printQueue();
}