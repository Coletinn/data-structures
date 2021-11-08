#include "Stack.h"

using namespace std;

Stack::Stack()
{
	current = -1;
}

void Stack::Push(string data)
{
	if (current == SIZE) 
	{
		return;
	}
	++current;
	values[current] = data;
}

string Stack::Pop()
{
	if (isEmpty()) {
		cout << "\nEmpty stack\n";
	}
	return values[current--];
}

void Stack::Print()
{
	if (isEmpty()) {
		return;
	}
	for (int i = current; i >= 0; i--) 
	{
		cout << values[i] << " " << endl;
	}
}

bool Stack::isEmpty()
{
	return current == -1;
}
