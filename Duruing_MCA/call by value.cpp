#include<iostream>
using namespace std;
void swap_values(int x,int y);

main()
{
int a=0,b=0;
cout<<"Enter value of a:";
cin>>a;
cout<<"Enter value of b:";
cin>>b;
cout<<"A="<<a<<"  B="<<b<<endl;
swap_values(a,b);
 cout<<"Outside Function A="<<a<<"  B="<<b<<endl;
}


void swap_values(int x,int y)
{

    cout<<"X="<<x<<"  Y="<<y<<endl;
    x = x^y;
    y = x^y;
    x = x^y;
    cout<<"Inside Function X="<<x<<"  Y="<<y<<endl;
    }



