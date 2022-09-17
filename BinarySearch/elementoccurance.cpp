#include<iostream>
using namespace std;

int countOccurences(int arr[], int n, int X)
{
	int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    
    int ans = 0;
    while(start <= end ){
        if(X == arr[mid]){
            ans++;
            start = mid + 1;
        }
        else if(X > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
 
int main(){
 
    int arr[] = {1, 2, 4, 4, 4, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    cout<<countOccurences(arr, size, 4);
 
}
