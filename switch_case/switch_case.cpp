#include<iostream>
using namespace std;

int main(){

    int a, b;
    char operation;
    // cout<<"Enter the value of a:";
    cin>>a;
    // cout<<"Enter the operation:";
    cin>>operation;
    // cout<<"Enter the value of b:";
    cin>>b;


    switch (operation)
    {
    case '+': cout<< a + b;
        break;
    case '-': cout<< a - b;
        break;
    case '*': cout<< a * b;
        break;
    case '/': cout<< a / b;
        break;
    case '%': cout<< a % b;
        break;
        
    
    default: cout<<"Please enter a valid operation";
        
    }
}