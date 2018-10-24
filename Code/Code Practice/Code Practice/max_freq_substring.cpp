#include <assert.h>
#include <string.h>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include "max_freq_substring.h"
using namespace std;

/*
Implementation of finding max frequency subvector. Determines the smallest
subvector that holds the integer with the highest frequency
*/
vector<int> max_freq_substring::find_max_ss(int arr[], int size) {
	int num_freq[10] = {};

	for (int i = 0; i < size; i++) {
		num_freq[arr[i]]++;
	}

	int num_highest_freq;
	int occurrences;

	cout << *std::max_element(arr, arr + size);

	num_highest_freq = std::distance(arr, std::max_element(arr, arr + size));
	occurrences = num_freq[num_highest_freq];

	cout << num_highest_freq << " " << occurrences << "\n";

	vector<int> subvector;
	bool in_subvec = false;

	for (int i = 0; i < size; i++) {
		if (in_subvec == true) {
			if (occurrences > 0) {

				if (arr[i] == num_highest_freq) {
					occurrences--;
				}

				subvector.push_back(arr[i]);
			}
			else {
				in_subvec = false;
			}
		}
		else {
			if (arr[i] == num_highest_freq) {
				subvector.push_back(arr[i]);
				in_subvec = true;
				occurrences--;
			}
		}
	}

	return subvector;

}

/*
Test function. Calls on
*/
void max_freq_substring::test() {
	assert(find_max_ss(test1, test1_size) == result1);
	assert(find_max_ss(test2, test2_size) == result2);

}


