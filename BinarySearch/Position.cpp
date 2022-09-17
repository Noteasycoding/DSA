#include<iostream>
using namespace std;

int firstPosition(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;

    while (start <= end)
    {
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end -start)/2;
    }
    return ans;
    
}

int lastPosition(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;

    while(start <= end ){
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;

}
 
int main(){
 
    int arr[10] = {0, 0, 1, 2, 2, 2, 2, 2, 3, 8};

    int first = firstPosition(arr, 10, 2);
    int second = lastPosition(arr, 10, 2);

    int total = (second - first) + 1;
    cout<<firstPosition(arr, 10, 2)<<endl;
    cout<<lastPosition(arr, 10, 2)<<endl;
    cout<<"Toatal number of occurrence: "<<total;

 
}
