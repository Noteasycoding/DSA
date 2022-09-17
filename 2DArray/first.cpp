#include<iostream>
using namespace std;

void print2DArray(int arr[][4]){  // Funtion for print 2D array

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
        
    }
    
}

void rowInput(int arr[][4]){  // Funtion for row wise input 

   for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
        
    } 
}

void colInput(int arr[][4]){ // Funtion for column wise input

    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin>>arr[row][col];
        }
        
    }
    
}

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
        
    }
    return 0;
}

int main(){
 
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    int arr[3][4];

    cout<<"For row wise input:"<<endl;
    rowInput(arr);
    // cout<<"Printing row wise:"<<endl;
    // print2DArray(arr);

    cout<<endl;
    // cout<<"For col wise input:"<<endl;
    // colInput(arr);
    // cout<<"Printing col wise:"<<endl;
    // print2DArray(arr);


    int target;
    cout<<"Enter the element to search:";
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }


    return 0;
}
