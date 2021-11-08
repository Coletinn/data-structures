#ifndef STACK_H
#include <iostream>
#define SIZE 10

using namespace std;

class Stack
{
private:
	int current;
	string values[SIZE];

public:
	Stack();
	void Push(string data);
	string Pop();
	void Print();
	bool isEmpty();
};

#endif STACK_H
