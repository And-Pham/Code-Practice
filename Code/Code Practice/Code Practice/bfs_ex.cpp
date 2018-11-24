#include "bfs_ex.h"
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <iostream>
//#include <queue>
using namespace std;

vector<int> bfs_ex::bfs(vector<vector<int>>& graph) {
	int num_nodes = graph.size();

	// Create visit list, init all nodes visited as false
	bool * visit_list = new bool[num_nodes];
	for (int i = 0; i < num_nodes; i++) {
		visit_list[i] = false;
	}

	vector<int> queue;

	int src_node = 0;

	visit_list[src_node] = true;
	queue.push_back(src_node);

	vector<int> search_list;

	int current_node = src_node;

	while (!queue.empty()) {
		current_node = queue.front();
		queue.erase(queue.begin());

		search_list.push_back(current_node);

		for (auto node : graph[current_node]) {
			if (!visit_list[node]){
				queue.push_back(node);
				visit_list[node] = true;
			}
		}

		cout << current_node << "\n";

	}

	cin.get();

	return search_list;

}

void bfs_ex::test() {

	assert(bfs(test_graph_1) == result_1);
	assert(bfs(test_graph_2) == result_2);

}