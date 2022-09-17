#include<iostream>
using namespace std;


int minValue(int num[], int size){

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
    
}
int maxValue(int num[], int size){

    int max = INT_MIN;
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if(num[i] > max){
            max = num[i];
            index = i;
        }
    }
    return index;
    
}
 
int main(){
 
    int arr[4] = {13, 25, 5, 7};
    cout<<"The max value is: "<<maxValue(arr,4)<<endl;
    cout<<"The min value is: "<<minValue(arr,4)<<endl;
 
}
