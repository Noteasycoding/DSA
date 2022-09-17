#include<iostream>
using namespace std;

void reverseArray(int arr[], int size, int m)
{ 
    int n = size - 1;

    for(int i = (m+1); i < n; i++, n--){
        swap(arr[i], arr[n]);
    }
} 

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
//  10 4 5 2 6 3 1 6 3 
int main(){
 
    int arr[9] = {10, 4, 5, 2, 3, 6, 1, 3, 6};
    reverseArray(arr, 9, 3 );
    printArray(arr,9);

 
}
