#ifndef QUEUE_H
#define QUEUE_H

#include "utility.h"

const int MAX_SIZE = 20;

class Queue {
public:
	Queue();
	Error_code inque(char value);
	Error_code deque(char &ch);
	int size() const;
	bool empty() const;
	bool full() const;

private:
	int _size;
	int front;
	int rear;
	char index[MAX_SIZE];
};


#endif