#include "Tree_Node.h"
#include <iostream>
using namespace std;

Tree_Node::Tree_Node(int val) {
	this->val = val;
	this->left = NULL;
	this->right = NULL;
}


Tree_Node::Tree_Node(int val, Tree_Node* l, Tree_Node* r)
{
	this->val = val;
	this->left = l;
	this->right = r;
}


Tree_Node::~Tree_Node()
{
	//delete this->left;
	//delete this->right;
}
