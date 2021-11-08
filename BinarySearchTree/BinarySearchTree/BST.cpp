#include "BST.h"
#include <iostream>

using namespace std;


BST::BST()
{
	root = NULL;
}

Node* BST::AddNode(Node* root, int data)
{
	if (root == NULL)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data < root->data)
	{
		root->left = AddNode(root->left, data);
	}
	else if (data > root->data)
	{
		root->right = AddNode(root->right, data);
	}
	return root;
}

void BST::AddNode(int data)
{
	root = AddNode(root, data);
}

void BST::PrintBST(Node* root)
{
	if (root == NULL)
	{
		return;
	}

	PrintBST(root->left);
	cout << root->data << " ";
	PrintBST(root->right);
}

void BST::PrintBST()
{
	PrintBST(root);
}
