#include<iostream>
using namespace std;


/*

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

*/

int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout<<col<<" ";
            col = col + 1;
        }

        // int star = row - 1;
        // while (star)
        // {
        //     cout<<"*"<<" ";
        //     star = star - 1;
        // }
        
        // star = row - 1;
        // while (star)
        // {
        //     cout<<"*"<<" ";
        //     star = star - 1;
        // }

        col = 1;
        while (col <= (row - 1)*2)
        {
            cout<<"*"<<" ";
            col = col + 1;
        }     
 
        col = n - row + 1;
        while (col >= 1)
        {
            cout<<col<<" ";
            col = col - 1;
        }

        cout<<endl;
        row = row + 1;
        
    }
    
}