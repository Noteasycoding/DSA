#include<iostream>
using namespace std;

void sort01(int arr[], int size){

    int i = 0;
    int end = size-1;
    while(i < end)
    {
        while(arr[i] == 0 ){
            i++;
        }
        while(arr[end] == 1 ){
            end--;
        }

        if(i < end){
            swap(arr[i], arr[end]);
            i++;
            end--;
        }      
                 
    }
}

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
 
int main(){
 
    int arr[12] = {0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0};

    sort01(arr, 12);
    printArray(arr, 12);
 
}
