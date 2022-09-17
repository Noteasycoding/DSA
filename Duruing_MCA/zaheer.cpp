#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int Num,fact=1,i,range=0,x,N,D,sum=0,j;
    cout<<"Enter the value of Num:";
    cin>>Num;
    for(i=1;i<=Num;++i)
        {
            fact=fact*i;
        }
cout<<"factorial="<<fact<<endl;
cout<<"Enter the range:"<<endl;
cin>>range;
cout<<"Enter the value of x:\n"<<endl;
cin>>x;
for(j=1;j<=range;++j)
{
   N=pow(x,i);// pre defined function
   D=fact;
   range=N/D;
   sum=sum+range;
}
cout<<"Sum="<<sum;
return 0;

}
