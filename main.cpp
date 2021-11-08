#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack stack;

	string data;
	int option = 1;
	
	while (true) {
		system("CLS");
		cout << "----- STACK MENU -----\n";

		cout << "1 - Push value into stack" << endl;
		cout << "2 - Pop value from stack" << endl;
		cout << "3 - Print stack" << endl;
		cout << "4 - End" << endl;
		cout << "Select your option: ";
		cin >> option;

		if (option == 1) {
			cout << "\nEnter data: ";
			cin >> data;
			stack.Push(data);
			system("PAUSE");
		}
		else if (option == 2) {
			cout << "\nData popped: " << stack.Pop() << endl;
			system("PAUSE");
		}
		else if (option == 3) {
			stack.Print();
			system("PAUSE");
		}
		else if (option == 4) {
			break;
		}

	}
}