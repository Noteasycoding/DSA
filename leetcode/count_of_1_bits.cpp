#include<iostream>
using namespace std;

int main(){
    unsigned int input;
    cout<<"Enter input: ";
    cin>>input;
    int count = 0;

    while (input != 0)
    {
        if (input & 1)
        {
            count++;
        }
        input = input >> 1;
    }
    cout<<"The count of 1 Bits: "<<count;
}