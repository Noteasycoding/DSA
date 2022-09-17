#include<iostream>
using namespace std;


int findUinque(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}
 
int main(){

    int arr[7] = {2, 3, 6, 3, 6, 2, 9};
    cout<<"Unique Element is: "<<findUinque(arr, 7);
 
    
 
}
