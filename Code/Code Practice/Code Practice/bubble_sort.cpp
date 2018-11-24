#include "bubble_sort.h"
#include <vector>
using namespace std;

vector<int> bubble_sort::bubble_sort(vetor<int> nums){

	for (int i = 0; i < nums.size() - 1; i++){
		for (int j = 0; j < nums.size() - 1 - i; j++){
			if (nums[j] > nums[j+1]){
				swap(nums[j], nums[j+1])
			}
		}
	}

	return nums;
}

void bubble_sort::test(){
	assert(bubble_sort(arr_1), sorted_arr_1);
	assert(bubble_sort(arr_2), sorted_arr_2);
}