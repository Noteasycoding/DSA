#include<iostream>
#include<vector>

using namespace std;

// bool check(vector<int>& nums) {
        
//         vector<int> temp;
//         int i = 0;
//         int n = nums.size();
//         int m = 1;
//         while(i < n){
//             temp[(i+m)%n] = nums[i];
//             if(temp == nums){
//                 return true;
//             }
//             m++;
//             i++;
//         }
        
//        return false; 
//     }


bool rotateArray(vector<int>& nums){
    vector<int> copyNums;
    copyNums = nums;
    int n = nums.size();
    vector<int> temp(n);
    int i = 0;
    

    while(i < n){
        temp[(i+n)%n] = nums[i];
        if(copyNums == temp){
                return true;
            }
        i++;
       
    }
    return false;
}

void printArray(vector<int> nums){
    for(int i : nums){
        cout<<i<<" ";
    }
}

 
int main(){
 
 vector<int> nums;

    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(9);
    nums.push_back(5);

    // cout<<check(nums);
    cout<<rotateArray(nums)<<endl;
    printArray(nums);

    
 
}
