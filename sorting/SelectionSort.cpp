#include<iostream>
using namespace std;
 
int main(){

    int arr[] = {12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr)/sizeof(int);
    int count = 0;
    for( int i=0 ;i<n-1 ; ++i){
     int  minIndex= i;   
    count++;
       for(int j= i+1; j< n ;++j){
        count++;
            if(arr[j] < arr[minIndex]){

                minIndex =j;
            }
        }

       swap(arr[i], arr[minIndex]);

   }
   cout<<count<<endl;

   for(int k = 0; k < n; k++) cout<<arr[k]<<" ";
 
}
