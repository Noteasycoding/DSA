#include<iostream>
using namespace std;

/*

A B C D
B C D E
C D E F
D E F G

*/

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
}