#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    vector<int> nums3(n+m);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if(nums1[i] < nums2[j]){
            nums3[k++] = nums1[i++];
        }
        else{
            nums3[k++] = nums2[j++];
                   
        }
    }
    while(i < m){
            nums3[k++] = nums1[i++];
        }

    while(j < n){
            nums3[k++] = nums2[j++];
        }
    nums1 = nums3;
        
    }

void printArray(vector<int> nums1){
    for(int i : nums1){
        cout<<i;
    }
}
 
int main(){
 
    vector<int> nums1; 
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);

    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    int m = nums1.size();
    int n = nums2.size();
    cout<<nums1.capacity()<<endl;
    merge(nums1, m, nums2, n);
    printArray(nums1);

    

    
}
