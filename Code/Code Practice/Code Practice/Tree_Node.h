#pragma once
#include "Tree_Node.h"


class Tree_Node
{
public:
	int val;
	Tree_Node *left;
	Tree_Node *right;
	Tree_Node(int val, Tree_Node* l, Tree_Node* r);
	Tree_Node(int val);
	~Tree_Node();
};

