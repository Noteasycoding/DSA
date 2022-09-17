#include<iostream>
using namespace std;

void printArray(int nums[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}
 
int main(){
 
    int nums[] = {2,2,2,3,4,5,2,2,2,2};    
    int size = sizeof(nums)/ sizeof(int);
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(nums[start] == nums[end]) start++;
        if (nums[mid] >nums[end])
        {
            start = mid + 1;
        }
       
        else{
            end--;
        }
        mid = start + (end - start)/2;
    }
    cout<<nums[start];
    
    }
 
