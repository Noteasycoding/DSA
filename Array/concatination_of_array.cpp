#include<bits/stdc++.h>
using namespace std;

 vector<int> getConcatenation(vector<int>& nums) {
        int start = 0;
        int end = nums.size();
        while(start < end){
            nums.push_back(nums[start]);
            start++;
        }
        return nums;
    }
 
int main(){
 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    nums = getConcatenation(nums);
    for(int i : nums){
        cout<< i<< " ";
    }
 
    return 0;
}
