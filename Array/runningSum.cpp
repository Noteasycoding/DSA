#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums)); 
        
        return nums;
    }
 
int main(){
 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    runningSum(nums);

    for(int i : nums){
        cout<< i<<" ";
    }
     
    return 0;
}
