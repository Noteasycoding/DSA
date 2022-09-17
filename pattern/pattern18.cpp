#include<iostream>
using namespace std;

/*

E 
D E 
C D E 
B C D E 
A B C D E 



int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    
    while (row <= n)
    {
        int col = 1;
        char ch = 'A'+ n - row;
        while (col <= row)
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
        char ch = 'A' + n - row;
        while (col <= row )
        {
            cout<<ch <<" ";
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
    
}