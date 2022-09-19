#include<iostream>
using namespace std;
 
int main(){
 
    int num = 5;
    cout<< num <<endl;

    // address of operator &
    cout<<"Address of num is :"<< &num <<endl;

    // You cannot store address of a variable in normal variable
    // int ptr = &num;
    
    // So pointer variable comes in picture
    int *ptr1 = &num;
    cout<<"Address is :"<< ptr1 <<endl;
    cout<<"Value is :"<< *ptr1 <<endl;

    // we have to declare same data type pointer as variable
    double d = 4.5;
    double *ptr2 = &d;

    cout<<"Address is :"<< ptr2 <<endl;
    cout<<"Value is :"<< *ptr2 <<endl;

    cout<<"Size of integer is :"<< sizeof(num) <<endl;

    // all the pointer use 8 byte of space because pointer always store address only
    cout<<"Size of integer pointer is :"<< sizeof(ptr1) <<endl;
    cout<<"Size of double pointer is :"<< sizeof(ptr2) <<endl;

}
