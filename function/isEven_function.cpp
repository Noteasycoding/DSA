#include<iostream>
using namespace std;

// void isEven(int a){
bool isEven(int a){

    // int a;
    // cout<<"Enter the number:";
    // cin>>a;

    if(a % 2 == 0){
        
        // cout<<"The number is Even";
        return true;
    }
    else{
        
        // cout<<"The number is Odd";
        return false;

    }
}

int main(){

    // int num;
    // cout<<"Enter the number:";s
    // cin>>num;

    cout<< isEven(12);

    // if(isEven(num)){
    //     cout<<"The number is Even";
    // }
    // else{
    //     cout<<"The number is odd";
    // }

}