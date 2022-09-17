#include<iostream>
using namespace std;

int main()
{

int n,n1,a,b,s=0;
cout<<"Enter a number:";
cin>>n;
n1=n;
while(n>0)
{
    a=n/10;
    b=n%10;
    n=a;
    s=s*10+b;

}
if(s==n)
    cout<<"The number is polindrom";
else
    cout<<"The number is not  polindrom";
 return 0;

}




