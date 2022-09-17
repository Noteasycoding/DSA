#include<iostream>
using namespace std;

void setValue(int arr[], int size){

    int value;
    cout<<"Enter value:";
    cin>>value;

    for (int i = 0; i < size; i++)
    {
        arr[i] = value;

    }
}

void printArray(int arr[], int size){

    cout<<"Printing Array"<<endl;

    for (int i = 0; i < size; i++){

        cout<<arr[i]<<" ";
        
        } 
        cout<<endl;
        cout<<"Printing Done";      
    }
 
int main(){

  
 
    // int arr[15];

    cout<<endl;
    // cout<<"Value at 14th index: "<<arr[14]<<endl;
    // cout<<"value at 20th index: "<<arr[20];

    //initializing an array 

    // int num[3] = {5, 7, 11};
    // cout<<"Value at 0th index: "<<num[0]<<endl;
    // cout<<"Value at 2nd index: "<<num[2]<<endl;


    // int first[10] = {2, 7};

    // int n = 10;

    // // Printing the array 

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<first[i]<<" ";
    // }

    // cout<<endl;
    // cout<<endl;
    
    // n = 10;
    // int fourth[10] = {0};

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }
    // cout<<endl;
    // cout<<endl;

    int fifth[10];
    int dummy[10];


    // for (int i = 0; i < n; i++)
    // {
    //     fifth[i] = 5;

    //     // dummy[i] = fifth[i];
        
    //     // cout<<fifth[i]<<" ";
        
    //     // cout<<dummy[i]<<" ";
    // }

    setValue(dummy, 10);
    cout<<endl;
    printArray(dummy, 8);
    cout<<endl;
    setValue(fifth, 10);
    printArray(fifth, 5);

    cout<<endl;
    
    
    
    
    

    




















    
 
}
