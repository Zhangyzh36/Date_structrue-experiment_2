#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "utility.h"
using namespace std;

typedef struct StackNode{
	StackNode(char _ch, StackNode *_next = NULL) : ch(_ch), next(_next) {}
	char ch;
	StackNode *next;
}Node;

class Stack {
public:
	Stack();
	Error_code push(char value);
	Error_code pop();
	char top() const;
	int size() const;
	bool empty() const;
	~Stack();
private:
	Node *head;
	int _size;
};

#endif