#pragma once
#include <vector>
#include "Tree_Node.h"
using namespace std;

class tree_traversals {

private:

	//Tree_Node node_3 = Tree_Node(3);
	//Tree_Node node_4 = Tree_Node(4);
	//Tree_Node node_1 = Tree_Node(1, &node_3, &node_4);
	//Tree_Node node_2 = Tree_Node(2);
	//Tree_Node test_tree_1 = Tree_Node(0, &node_1, &node_2);

	//vector<int> inorder_result_1 = { 3, 1, 4, 0, 2 };	// (Left, Root, Right)
	//vector<int> preorder_result_1 = { 0, 1, 3, 4, 2 };	// (Root, Left, Right)
	//vector<int> postorder_result_1 = { 3, 4, 1, 2, 0 };	// (Left, Right, Root)

	
	Tree_Node node_8 = Tree_Node(8);
	Tree_Node node_7 = Tree_Node(7);
	Tree_Node node_6 = Tree_Node(6);
	Tree_Node node_5 = Tree_Node(5);
	Tree_Node node_4 = Tree_Node(4, &node_7, &node_8);
	Tree_Node node_3 = Tree_Node(3);
	Tree_Node node_2 = Tree_Node(2, &node_5, &node_6);
	Tree_Node node_1 = Tree_Node(1, &node_3, &node_4);
	Tree_Node test_tree_2 = Tree_Node(0, &node_1, &node_2);

	vector<int> inorder_result_2 = { 3, 1, 7, 4, 8, 0, 5, 2, 6};	// (Left, Root, Right)
	vector<int> preorder_result_2 = { 0, 1, 3, 4, 7, 8, 2, 5, 6};	// (Root, Left, Right)
	vector<int> postorder_result_2 = { 3, 7, 8, 4, 1, 5, 6, 2, 0};	// (Left, Right, Root)
	


public:
	vector<int> inorder_traversal(Tree_Node* root, vector<int> path);

	vector<int> postorder_traversal(Tree_Node* root, vector<int> path);

	vector<int> preorder_traversal(Tree_Node* root, vector<int> path);

	void test();

};
