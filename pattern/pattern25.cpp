#include<iostream>
using namespace std;

/*

      1 
    2 3 
  4 5 6 
7 8 9 10 



int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout<<" "<<" ";
            space = space - 1;

        }
        int col = 1;
        while (col <= row)
        {
            cout<<count<<" ";
            count = count + 1;
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
    int count = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout<<" "<<" ";
            space = space + 1;
        }
        
        int col = 1;
        while (col <= row )
        {
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}
