#include<iostream>
using namespace std;
 
int main(){
 
    int *p;
    int a = 10;
    p = &a;
    *p = 12;
    cout<<a;
 
}
