#include<bits/stdc++.h>
using namespace std;

 int findNumbers(vector<int>& nums) {
    int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            string str = to_string(nums[i]);
            if(str.length() % 2 == 0){
                count++;
            }
        }
        return count;
        
    }
 
int main(){
 
    vector<int> nums = {555,901,482,1771};
    int ans = findNumbers(nums);
    cout<<ans;
 
    return 0;
}
