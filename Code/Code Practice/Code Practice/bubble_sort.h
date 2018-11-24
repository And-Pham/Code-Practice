#pragma once
#include <vector>
using namespace std;

class bubble_sort {

private:
	vector<int> arr_1 = {2, 3, 5, 1, 6};
	vector<int> sorted_arr_1 = {1, 2, 3, 5, 6};	
	vector<int> arr_2 = { 0, 1, 1, 2, 4, -1, 2};
	vector<int> sorted_arr_2 = {-1, 0, 1, 1, 2, 2, 4};
	


public:
	vector<int> bubble_sort(vector<int> arr);

	void test();

};
