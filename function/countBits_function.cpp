#include<iostream>
using namespace std;

int countBits(int a){

    int count = 0;
   while(a != 0 ){

        count = count + (a & 1);
        a = a >> 1;

    }
    
    return count;


}

int main(){

    int a, b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;

    int total_bits = countBits(a) + countBits(b);
    cout<<total_bits;
}