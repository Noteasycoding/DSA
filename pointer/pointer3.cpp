#include<iostream>
using namespace std;
 
int main(){
 
    // pointer to int is created and pointing to garbage address
    // Don't do this, this is bad practice
    // int *p;

    // Either of this you can do this
    // int *p = 0;
    // cout<< *p <<endl;

    /*
    int i = 5;
    int *q = &i;

    cout<< q <<endl;
    cout<< *q <<endl;

    int *p = 0;
    p = &i;

    cout<< p <<endl;
    cout<< *p <<endl;  
    */

    int num = 5;
    int a = num;

    cout<<"a Before increament :"<< num <<endl;
    a++;
    cout<<"a After increament :"<< num <<endl;

    int *p = &num;
    cout<<"Before increament :"<< num <<endl;

    (*p)++;
    cout<<"After increament :"<< num <<endl;

    // copying a pointer 
    int *q  = p;
    cout<< p << " - " << q <<endl;
    cout<< *p << " - " << *q <<endl;



    return 0;
}
