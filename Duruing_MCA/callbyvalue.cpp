#include<iostream>
using namespace std;
void swap_values(int,int);

main()
{

int a=0,b=0,s=0;
cout<<"Enter two number:";
cin>>a>>b;
cout<<"A="<<a<<"  B="<<b;

swap_values(a,b);
cout<<"Now A="<<a<<"B="<<b;
}
swap_values(int x,int y)
{
    int t=o;
    cout<<"X="<<x<<"Y="<<y;
    t=x;
    x=y;
    y=t;
    cout<<"Now x="<<x<<"Y="<<y;
}

