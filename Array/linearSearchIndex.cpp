#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){

   

    for(int i = 0; i < size; i++){
        if(arr[i] == k){
            return 1;
        }
    }
    return 0;
}
 
int main(){
 
    int arr[10] = {10, 12, 13, 14, 5, 7, 9, 24, 8, 6 };

    int key = 0;
    cout<<"Enter Key:";
    cin>>key;    

    if(linearSearch(arr, 10, key)){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
 
}
