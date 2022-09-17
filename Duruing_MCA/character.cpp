#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter a character:";
    cin>>x;
    if((x>=48)&&(x<=57))
        cout<<"this is a digit";
    else if((x>=65)&&(x<=90))
        cout<<"this is an upper case letter";
    else if((x>=97)&&(x<=122))
        cout<<"This is a lower case letter";
    else
        cout<<"this is a special character";


    return 0;


}
