#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        int x = 0;
        int y = n;
        vector<int> arr;
        int i = 0;
        while(i < nums.size()){
            if(i & 1 && y < nums.size()){
                arr.push_back(nums[y]);   
                y++;
            }
            else{
                arr.push_back(nums[x]);
                x++;
            }
            i++;
        }       
        return arr;
    }
 
int main(){
    
    vector<int> nums;
    vector<int> ans;

    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);

    ans = shuffle(nums, 3);

    for(int i : ans){
        cout<<i<< " ";
    }
    
 
    return 0;
}
