#include<iostream>
using namespace std;

int fact(int num){

    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;

}

// int nCr(){
void nCr(){

    int n, r;
    cout<<"Enter N:";
    cin>>n;
    cout<<"Enter R:";
    cin>>r;

    int ans = fact(n)/(fact(r)*(fact(n - r)));
    // int numi = fact(n);
    // int deno = fact(r)*(fact(n - r));
    // int ans = numi / deno;
    cout<<"nCr is: "<<ans;
    // return ans;
    // return numi / deno;
}

int main(){

    // int n, r;
    // cout<<"Enter N:";
    // cin>>n;
    // cout<<"Enter R:";
    // cin>>r;

    // cout<<nCr();
    nCr();

    

}