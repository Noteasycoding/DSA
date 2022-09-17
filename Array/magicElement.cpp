#include<iostream>
using namespace std;

int magicIndex(int a[] , int n) {
	
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(mid == a[mid]){
            return mid;
        }
        else if(a[mid]>mid){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
 
    int arr[] = {-3,-2, -1, 1, 4, 4};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<magicIndex(arr, size);
 
}
