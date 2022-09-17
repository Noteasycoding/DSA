#include<iostream>
using namespace std;

void Input(int arr[][4]){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
    }
    
}

void ColSum(int arr[3][4], int row, int col){
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    
}

void printArray(int arr[][4]){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
}
 
int main(){
 
    int arr[3][4];
    cout<<"Enter Element:"<<endl;
    Input(arr);
    cout<<endl;
    printArray(arr);
    cout<<endl;
    cout<<"Printing sum"<<endl;
    ColSum(arr, 3, 4);
 
}
