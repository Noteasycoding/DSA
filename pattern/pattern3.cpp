#include<iostream>
using namespace std;

/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 
*/

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
            cout<<col<<" ";
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }
    
}