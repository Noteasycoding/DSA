#include<iostream>
using namespace std;

int main(){

    int input;
    cout<<"Enter the number:";
    cin>>input;

    int m = input;
    int mask = 0;

    if(input == 0){
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    // int ans = (~input) & mask;
    int ans = (input) ^ mask;
    cout<<"The complement of the number is: "<<ans;
    
}