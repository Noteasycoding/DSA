#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    


    for (int i = 0; i <= num; i++)
    {
        for (int j = -1; j <= i; j++)
        {
            cout<<i + j;
        }
        
    }
    
}