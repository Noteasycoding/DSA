#include<iostream>
#include<vector>
using namespace std;
 
 int maxi(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        return maxi;
    }
    
    int mini(vector<int>& nums){
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
        }
        return mini;
    }

    int smallestRangeI(vector<int>& nums, int k) {
       int ans = (maxi(nums) -k) - (mini(nums) + k);
       
       if(ans > 0){
        return ans;
       }
       return 0;
    }


int main(){

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(6);
    int k = 3;
    
    int ans = smallestRangeI(nums, k);
    cout<<ans;
 
}
