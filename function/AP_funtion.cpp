#include<iostream>
using namespace std;

int nthTerm( int n){

    int ap = (3 * n + 7);

    return ap;
}

int main(){

    int num;
    cout<<"Enter number:";
    cin>>num;
    
    cout<<"nth term is: "<<nthTerm(num);
}