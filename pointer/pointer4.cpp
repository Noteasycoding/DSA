#include<iostream>
using namespace std;
 
int main(){
 
    int num = 5;
    int *p = &num;
    int *q = p;
    cout<<"the address of num is :"<<q<<endl;

    //-----------double Pointer--------
    //double Pointers are used to store the address of a pointer
    int **r = &p;
    cout<<"the address of p is :"<<r<<endl;
    cout<<"the value at p is :"<<**r<<endl;

    //-----------Void Pointer ------------
    //A void pointer can hold adress of any type and can be typecast to any type

    void *ptr1 = &num;
    cout<<"the address of num is :"<<ptr1<<endl;
    // cout<<*ptr1<<endl; // this is why beacause void pointer is not the ,pointer to object type

    //void pointer can hold the adress of a pointer

    void *ptr2 = &p;
    cout<<"the address of p is :"<<ptr2<<endl;
    // cout<<*ptr2<<endl; 

    void *ptr3 = &r;
    cout<<"the address of r is :"<<ptr3<<endl;
    int ***ptr4 = &r;
    cout<<"the address of r is :"<<ptr4<<endl;

    //---------Wild pointers--------------
    //when declared but not initialized
    //So they point to any random memory location;

    // int *ptr5;
    // cout<<"the wild pointer is :"<<ptr5;
    // *ptr5= 5; 
    // cout<<"wild pointer :"<<ptr5;

    int *ptr6;
    int a = 10;
    ptr6 = &a; // ptr6 is not a wild pointer now
    *ptr6 = 12; // Dynamic memory allocation also possible using pointers
    cout<<"Now the value of a is :"<<a;



    


 
}
