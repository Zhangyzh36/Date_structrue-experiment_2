#include "Stack.h"

Stack::Stack()
{
	head = NULL;
	_size = 0;
}

Error_code Stack::push(string value)
{
	Node *newPtr = new Node(value);

	if ( !newPtr )
		return OVERFLOW;

	if ( empty() )
		head = newPtr;
	else
	{
		newPtr->next = head;
		head = newPtr;
	}

	_size++;
	return SUCCEES;
}

Error_code Stack::pop()
{
	if ( empty() )
		return UNDERFLOW;

	Node *temp = head;
	head = head->next;
	delete temp;
	_size--; 
	return SUCCEES;
}

string Stack::top() const
{
	return head->ch;
}

int Stack::size() const
{
	return _size;
}

bool Stack::empty() const
{
	return head == NULL;
}

Stack::~Stack()
{
	while ( !empty() )
		pop();
}
