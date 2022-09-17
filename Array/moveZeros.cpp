#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if(nums[j] != 0){
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }
    
}

void printArray(vector<int> nums){
//    for(int i:nums){
//     cout<<i<<" ";
//    }

   for (int i = 0; i < nums.size(); i++)
   {
    cout<<nums[i]<<" ";
   }
   
    
}
 
int main(){
 
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    // cout<<nums.capacity()<<endl;
    // cout<<nums.size()<<endl;

    moveZeros(nums);
    printArray(nums);
 
}
