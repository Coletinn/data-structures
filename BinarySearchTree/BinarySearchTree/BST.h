#pragma once

#ifndef BST_H

struct Node {
	int data;
	Node* left, * right;
};

class BST 
{
private:
	Node* root;
	Node* AddNode(Node* root, int data);
	void PrintBST(Node* root);

public:
	BST();
	void AddNode(int data);
	void PrintBST();
};


#endif BST_H
