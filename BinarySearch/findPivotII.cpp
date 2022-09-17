#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
    
}
 
int main(){
 
    int arr[7] = {5, 6, 7, 1, 2, 3, 4,};
    int size = sizeof(arr)/sizeof(int);

    cout<<findPivot(arr, size);
 
}
