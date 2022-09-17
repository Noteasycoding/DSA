#include<iostream>
using namespace std;

int arrIndexIncreasing(int arr[], int size, int key){

    int start = 0;
    // where size = n;
    int end = size - 1;

    // Find mid / Divide array
    int mid = (start + end)/2;

    // this condition is must, to avoid overlap
    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        // If key is large than go to right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        // Else go to left part
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}
int arrIndexDecreasing(int arr[], int size, int key){

    int start = 0;
    // where size = n;
    int end = size - 1;

    // Find mid / Divide array
    int mid = (start + end)/2;

    // this condition is must, to avoid overlap
    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        // If key is large than go to right part
        if(key > arr[mid] ){
            end = mid - 1;
        }
        // Else go to left part
        else{
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}
 
int main(){
 

    // Array must be sorted, either in increasing order or decreasing order
    int evenArr[10] = {2, 4, 7, 9, 12, 15, 17, 19, 29, 45};
    int oddArr[9] = {51, 45, 35, 30, 25, 22, 19, 17, 10};

    cout<<"45 is present on index: "<<arrIndexIncreasing(evenArr, 10, 45)<<endl;
    cout<<"35 present on index: "<<arrIndexDecreasing(oddArr, 9, 35);

 
}
