#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, vector<int>& nums4){
    // vector<int> arr3;
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j]){
            nums4[k++] = arr1[i++];
        }
        else{
            nums4[k++] = arr2[j++];
                   
        }
    }
    while(i < m){
            nums4[k++] = arr1[i++];
        }

    while(j < n){
            nums4[k++] = arr2[j++];
        }
    
    
}

void print(vector<int>& nums4){

    int n = nums4.size();
    for(int i = 0; i < n; i++){
        cout<<nums4[i]<<" ";
    }
}
 
int main(){

    int arr1[5] = {1,2,3,4,7};
    int arr2[3] = {2,5,6};
    vector<int> nums4(7);
    merge(arr1, 5, arr2, 3, nums4);
    print(nums4);

    return 0;
    
 
}
