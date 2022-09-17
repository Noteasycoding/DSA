#include<iostream>
using namespace std;

int main(){

    int size = 5;
    int value = 1;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = value;
    }
    cout<<"The array is: ";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}