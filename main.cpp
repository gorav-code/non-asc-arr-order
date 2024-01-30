//
//  main.cpp
//  TestCPP
//
//  Created by Gaurav Kundalwal on 23/01/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void printArr(string tag, vector<int> arr){
    cout << "\n" << tag << " [";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << (i == (arr.size() - 1) ? "" : ", ");
    }
    cout << "]\n"; 
}

vector<int> sortedSquares(vector<int>& nums){
    for (auto &n : nums) n *= n;
    sort(nums.begin(), nums.end());
    return nums;
}

void main(){
    vector<int> v = {-4,-1,0,3,10};
    sortedSquares(v);
    printArr("Output", v);
}

