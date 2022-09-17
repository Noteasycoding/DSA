#include<iostream>
using namespace std;
void swap_values(int*,int*);

main()
{
    int a=0,b=0;
    cout<<"Enter two integers:";
    cin>>a>>b;
    cout<<"A="<<a<<" B="<<b<<endl;
    swap_values(&a,&b);
    cout<<"A="<<a<<" B="<<b<<endl;
}
void swap_values(int*x,int*y)
{
    int t=0;
    cout<<"X="<<x<<" Y="<<y<<endl;
    t=*x;
    *x=*y;
    *y=t;
    cout<<"Now X="<<*x<<" Y="<<*y<<endl;
    }


