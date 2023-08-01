#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int range=0,n=0,i,j,sum=0,N,D,fact=1,x=0;

    cout<<"enter range";
    cin>>range;
    cout<<"enter x";
    cin>>x;
    for(i=1; i<=range; i++)
    {
        N=pow(x,i);
        for(j=1; j<=i; j++)
        {

            fact=fact*i;
        }
        range=N/fact;
        sum=sum+range;
        cout<<sum;
        return sum;


    }
}

