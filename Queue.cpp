#include "Queue.h"

Queue::Queue()
{
	_size = 0;
	front = 0;
	rear = MAX_SIZE - 1;
}

Error_code Queue::inque(char value)
{
	if ( full() )
		return OVERFLOW;

	rear = (rear + 1) % MAX_SIZE;
	index[rear] = value;
	_size++;

	return SUCCEES;
}

Error_code Queue::deque(char &ch)
{
	if ( empty() )
		return UNDERFLOW;

	ch = index[front];
	front = (front + 1) % MAX_SIZE;
	_size--;
	
	return SUCCEES;
}

int Queue::size() const
{
	return _size;
}

bool Queue::empty() const
{
	return _size == 0;
}

bool Queue::full() const
{
	return _size == MAX_SIZE;
}
