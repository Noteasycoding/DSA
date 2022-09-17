#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]> mid){
                return false;
            }
    
            pageSum = arr[i];
        }
    }
    return true;
    
}
 
int main(){
 
    int student = 2;
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;

    int ans = - 1;

    int mid = (start + end)>>1;

    // cout<<mid;

    while(start <= end){

        if(isPossible(arr, n, student, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    mid = (start + end)>>1;
    }
    cout<<ans;


 
}
