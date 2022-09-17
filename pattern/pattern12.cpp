#include<iostream>
using namespace std;

/*

A B C D 
A B C D 
A B C D 
A B C D 



int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    while (row <= n)
    { 
        // *******First way********
        // int col = 1;
        // int ch = 'A';
        // while (col<=n)
        // {
        //     char alpha = ch;
        //     cout<<alpha<<" ";
        //     ch = ch + 1;
        //     col = col + 1;
        // }

        // *******Second Way********

        int col = 1;
        while(col <= n){
            char ch = 'A'+ col - 1;
            cout<<ch<<" ";
            col = col + 1;
        }

      
        cout<<endl;
        row = row + 1;
    }
    
}
*/
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    

    while (row <= n)
    {   
        char ch = 'A';
        int col = 1;
        while (col <= n)
        {
            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}