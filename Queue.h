#ifndef QUEUE_H
#define QUEUE_H

#include "utility.h"
#include <string>
using namespace std;

const int MAX_SIZE = 20;

class Queue {
public:
	Queue();
	Error_code inque(string value);
	Error_code deque(string &ch);
	int size() const;
	bool empty() const;
	bool full() const;

private:
	int _size;
	int front;
	int rear;
	string index[MAX_SIZE];
};


#endif
