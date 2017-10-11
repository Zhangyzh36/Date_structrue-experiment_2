#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>
#include "utility.h"
using namespace std;

typedef struct StackNode{
	StackNode(string _ch, StackNode *_next = NULL) : ch(_ch), next(_next) {}
	string ch;
	StackNode *next;
}Node;

class Stack {
public:
	Stack();
	Error_code push(string value);
	Error_code pop();
	string top() const;
	int size() const;
	bool empty() const;
	~Stack();
private:
	Node *head;
	int _size;
};

#endif
