#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target){
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
    
        vector<int> ans;
        while(start <= end ){
            if(target == nums[mid]){
                if(target == nums[mid]){
                    ans.push_back(mid);
                    mid--;
                }
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }        
 
int main(){
 
    vector<int> nums;
    vector<int> ans;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    ans = targetIndices(nums, 2);
    for (int i : ans)
    {
        cout<<i<<" ";
    }
    
}
