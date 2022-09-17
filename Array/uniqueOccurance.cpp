#include<iostream>
using namespace std;


int findUinque(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    if(ans > 0){
        return true;
    }
    return false;
    
}
 
int main(){

    int arr[7] = {2, 3, 5, 6, 3, 6, 2};
    cout<<findUinque(arr, 7);
 
    
 
}
