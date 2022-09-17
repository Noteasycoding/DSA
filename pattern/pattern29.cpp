#include<iostream>
using namespace std;
 
int main(){
 
    int num;
    cout<<"Enter the num:";
    cin>>num;

    int row = 1;
    int count = 1;
    while (row <= num && count <= num)
    {
        int col = 1;
        while (col <= row && count <= num)
        {
            cout<<"*"<<" ";
            count++;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
    cout<<row - 2;
    
    
 
}
