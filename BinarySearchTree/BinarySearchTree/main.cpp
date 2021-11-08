#include "BST.h"
#include <iostream>

using namespace std;

int main()
{
	BST tree;

	bool running = true;
	int option;

	while (running)
	{
		system("CLS");
		cout << "--- BINARY SEARCH TREE ---";
		cout << "\n1 - Add node to BST" << endl;
		cout << "2 - Print BST" << endl;
		cout << "3 - End" << endl;
		cout << "Enter your option: ";
		cin >> option;

		if (option == 1)
		{
			cout << "Enter data: ";
			int data;
			cin >> data;
			tree.AddNode(data);
		}
		else if (option == 2)
		{
			cout << endl;
			tree.PrintBST();
			cout << endl;
			system("PAUSE");
		}
		else if (option == 3)
		{
			break;
		}
		else {
			cout << "\nOption does not exist." << endl;
			system("PAUSE");
		}
	}

	return 0;
}