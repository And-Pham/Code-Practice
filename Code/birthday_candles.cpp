#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
    
    std::map<int, int> m;
    
    for (int i = 0; i < ar.size(); i++){
        std::map<int, int>::iterator it = m.find(ar[i]); 
        if (it == m.end()){
            m.insert(std::make_pair(ar[i], 1));  
        } else {
            it->second += 1;
        }
        
    }
    
    std::map<int, int>::iterator last_it = m.find(*std::max_element(std::begin(ar), std::end(ar)));
    
    return last_it->second;

}