#include "Queue.h"
#include<ctime>

int main()
{
	srand(time(0));

	//create queue with max lenght 25 elem

	Queue QU(25);

	//fill part of queue

	for (int i = 0; i < 5; i++) {
		QU.addElem(rand() % 50);
	}

	//print queue

	QU.printQueue();

	cout << endl;

	//extracting elem

	cout << QU.extractElem() << endl << endl;

	//print queue

	QU.printQueue();
}