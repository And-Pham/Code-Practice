#include "tree_traversals.h"
#include <iostream>
#include <assert.h>
using namespace std;

vector<int> tree_traversals::inorder_traversal(Tree_Node* root, vector<int> path)
{
	if (root == NULL) {
		return path;
	}

	path = inorder_traversal(root->left, path);

	path.push_back(root->val);
	cout << root->val << "\n";

	path = inorder_traversal(root->right, path);

	return path;
}

vector<int> tree_traversals::postorder_traversal(Tree_Node* root, vector<int> path)
{
	if (root == NULL) {
		return path;
	}

	path = postorder_traversal(root->left, path);

	path = postorder_traversal(root->right, path);

	path.push_back(root->val);
	cout << root->val << "\n";

	return path;
}

vector<int> tree_traversals::preorder_traversal(Tree_Node* root, vector<int> path)
{
	if (root == NULL) {
		return path;
	}

	path.push_back(root->val);
	cout << root->val << "\n";

	path = preorder_traversal(root->left, path);

	path = preorder_traversal(root->right, path);

	return path;
}

void tree_traversals::test()
{
	/*assert (inorder_traversal(&test_tree_1, {}) == inorder_result_1);
	cin.get();
	assert (preorder_traversal(&test_tree_1, {}) == preorder_result_1);
	cin.get();
	assert (postorder_traversal(&test_tree_1, {}) == postorder_result_1);
	cin.get();*/

	
	assert(inorder_traversal(&test_tree_2, {}) == inorder_result_2);
	cin.get();
	assert(preorder_traversal(&test_tree_2, {}) == preorder_result_2);
	cin.get();
	assert(postorder_traversal(&test_tree_2, {}) == postorder_result_2);
	cin.get();

}

