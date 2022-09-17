#include<iostream>
using namespace std;
 
int main(){
 
    
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(int);
    int studentCount = 2;
    int st1;
    int st2;
    for (int i = 0; i < n - 1; i++)
    {
        cout<<arr[i]<<" ";
        st1 = st1 + arr[i];
        for (int j = i + 1; j < n; j++)
        {
            cout<<arr[j]<<" ";
            st2 = st2 + arr[j];
        }
        
    }
    cout<<endl;
    cout<<st1<<endl;
    cout<<st2;
     
 
}
