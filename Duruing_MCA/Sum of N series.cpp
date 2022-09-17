#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
int N=0,i=1,S=0,sum=0;
cout<<"Enter the number of terms:";
cin>>N;
for(i=1;i<=N;i++)
    {
        S=S*10+1;
        cout<<S<<"+";
        sum=sum+S;
    }
    cout<<"\n Sum of terms:="<<sum;

return 0;

}
