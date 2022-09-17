#include<iostream>
using namespace std;

/*

A A A A
B B B B
C C C C
D D D D



int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    
    while (row <= n)
    {
        int col = 1;         
        
        while (col <= n)
        {
            char ch = 'A' + row -1;
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
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        ch = ch + 1;
        row = row + 1;
        
    }
    
}