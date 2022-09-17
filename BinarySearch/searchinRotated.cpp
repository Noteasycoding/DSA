#include<iostream>
using namespace std;

int getPivot(int nums[], int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(nums[mid] >= nums[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
    
}

int searchEle(int nums[], int start, int end,  int target){

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(target == nums[mid]){
            return mid;
        }
        else if( target > nums[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;

    }
    return -1;
}
 
int main(){
 
    int nums[] = {3 , 1};
    int target = 1;
    int size = sizeof(nums)/sizeof(int);
    int pivot = getPivot(nums, size);

    if(target >= nums[pivot] && target <= nums[size - 1]){
        cout<< searchEle(nums, pivot, size-1, target); 
    }
    else{
        cout<< searchEle(nums, 0, pivot-1, target);
    }
 
}
