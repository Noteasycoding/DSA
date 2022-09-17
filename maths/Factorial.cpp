#include<iostream>
#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull factorial(int n){
    ull  fact = 1;
    int m = 1000000000 + 7;
    for(ull i = n; i > 1; i--){
        fact = ((fact) * (i));
    }
    return fact;
}
 
int main(){
 
    int num;
    cout<<"Enter number:";
    cin>>num;

    cout<<factorial(num);
 
}
// 479001600


