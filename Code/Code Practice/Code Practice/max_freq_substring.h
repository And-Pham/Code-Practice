#pragma once
#include <vector>
#include <iostream>
using namespace std;

class max_freq_substring{

private:
	int test1_size = 6;
	int test1[6] = { 1, 2, 2, 3, 3, 3 };
	vector<int> result1 = { 3, 3, 3 };

	int test2_size = 6;
	int test2[6] = { 1, 2, 3, 2, 3, 3 };
	vector<int> result2 = { 3, 2, 3, 3 };

public:
	vector<int> find_max_ss(int arr[], int size);

	void test();
};
