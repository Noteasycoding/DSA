#include<iostream>
using namespace std;

/*

A B C D E
F G H I J 
K L M N O
P Q R S T



int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = row + 1;
    char ch = 'A';

    while (row <= n)
    {
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
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}