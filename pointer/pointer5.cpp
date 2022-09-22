#include<iostream>
#include<string>
using namespace std;

//Pointer with char arrays
 
int main(){
 
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    string st = "zaheer khan";

    int *ptr = arr;
    ptr = &arr[0];
    
    

    //int array and char array both have different implementation for cout function
    cout<<arr<<endl;
    cout<<ch<<endl;
    cout<<st<<endl;

    char* c = &ch[0];
    //prints entire string

    cout<<&ch[3]<<endl;
    cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;


 
}
