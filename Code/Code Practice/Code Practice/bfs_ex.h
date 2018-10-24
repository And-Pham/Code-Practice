#pragma once
#include <vector>
using namespace std;

class bfs_ex {

private:
	vector<vector<int>> test_graph_1 = { {1, 2}, {3, 4}, {5}, {}, {}, {} };
	vector<int> result_1 = { 0, 1, 2, 3, 4, 5};

	vector<vector<int>> test_graph_2 = { {1, 3, 5}, {4}, {}, {2}, {}, {4} };
	vector<int> result_2 = { 0, 1, 3, 5, 4, 2 };


public:
	vector<int> bfs(vector<vector<int>>& graph);

	void test();
};
