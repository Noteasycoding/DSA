#include<iostream>
#include<vector>
using namespace std;

 void findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int i = 0, j = 0; 
        int m = nums1.size();
        int n = nums2.size();
        double median = 0;
        
        while(i < m || j < n){
            if(nums1[i] < nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        int o = temp.size();
        int start = 0;
        int end = o-1;
        int mid = start + (end - start)/2; 
        
        if(o % 2 == 0){
            median = (temp[mid] + temp[mid + 1])/2.0;
        }
        else{
            median = temp[mid];
        }

        // return median;
        for(int i : temp){
            cout<<i<<" ";
        }
    }
 
int main(){
 
    vector<int> nums1;
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(7);

    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    
    // cout<<findMedianSortedArrays(nums1, nums2);
    findMedianSortedArrays(nums1, nums2);
      
 
}
