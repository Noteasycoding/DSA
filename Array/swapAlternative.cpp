#include<iostream>
using namespace std;


void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }    
}

void swapAlt(int arr[], int size){
    
    for (int i = 0; i + 1 < size; i+=2)    
    // for (int i = 0; i < size; i+=2)
    {
        // if( i + 1 < size){
        swap(arr[i], arr[i + 1]);
        // }
    }    
}


 
int main(){
 
    int arrEven[6] = {5, 6, 3, 2, 1, 9};
    int arrOdd[7] = {1, 5, 6, 3, 2, 1, 9};
    
    swapAlt(arrEven, 6);
    printArray(arrEven, 6);
    cout<<endl;
    swapAlt(arrOdd, 7);
    printArray(arrOdd, 7);
 
}
