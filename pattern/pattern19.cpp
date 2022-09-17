#include<iostream>
using namespace std;

/*

A B C D 
B C D E 
C D E F 
D E F G 



int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - col;
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

*/

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - col;
        while (col <= n)
        {
            cout<<ch <<" ";
            ch = ch + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }
    
}
