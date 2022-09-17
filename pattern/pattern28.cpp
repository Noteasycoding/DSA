#include<iostream>
using namespace std;

/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        
*/

int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    for (int row = 1; row <= n; row = row + 2)
    {
        for (int space = (row-1)/2; space; space--)
        {
            cout<<" "<<" ";
        }
        
        for (int col = 1; col<= n - row + 1; col++)
        {
            cout<<"*"<<" ";
            
        }
        cout<<endl;
        
    }
        
}