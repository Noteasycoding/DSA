#include<iostream>
using namespace std;

void swapValues(int *num1, int *num2){

    // Method 1-----------
    // int temp = *num1;
    // *num1 = *num2;
    // *num2 = temp;

    // Method 2-----------
    // *num1 = *num1 + *num2;
    // *num2 = *num1 - *num2;
    // *num1 = *num1 - *num2;

    // Method 3-----------
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;

    // cout<<"inside function"<<endl;
    // cout<<"num1 :"<<*num1<<endl;
    // cout<<"num2 :"<<*num2<<endl;
    
}
 
int main(){
 
    int num1 = 5;
    int num2 = 7;

    // int *ptr = &num1;
    // cout<<"Address is ->"<<ptr<<endl;
    // cout<<"Value at pointer ->"<<*ptr<<endl;

    cout<<"Before Calling funtion"<<endl;
    cout<<"num1 :"<<num1<<endl;
    cout<<"num2 :"<<num2<<endl;

    // Function Calling------------
    swapValues(&num1, &num2);
    cout<<"After Calling funtion"<<endl;
    cout<<"num1 :"<<num1<<endl;
    cout<<"num2 :"<<num2<<endl;



}
