#include <iostream>
#include <vector>
#include <stdio.h>
#include <assert.h>
#include <algorithm>
#include "vector_range.h"
using namespace std;

int vector_range::find_range(int arr[], int size) {
	int min_int = arr[0];
	int max_int = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] < min_int){
			min_int = arr[i];
		}
		else if (arr[i] > max_int) {
			max_int = arr[i];
		}
	}
	cout << min_int << " " << max_int;

	return (max_int - min_int);
}


void vector_range::test() {
	int test1[5] = { 1, 2, 3, 4, 5 };
	int test2[5] = { 2, 4, 6, 8, 10 };
	int test3[5] = { -1, 0, 1, 3, 5 };
	int test4[3] = { 4, 7, 2 };

	assert(find_range(test1, 5) == 4);
	assert(find_range(test2, 5) == 8);
	assert(find_range(test3, 5) == 6);
	assert(find_range(test4, 3) == 5);

	
}



