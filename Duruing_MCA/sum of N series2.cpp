#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
int n=0,s=1,sum=0,i;
cout<<"Enter the number of terms:";
cin>>n;
for(i=0;i<n;i++)
    {
        s=s+i;
        cout<<s<<"+";

        sum=sum+s;
    }
    cout<<"\n Sum of series:"<<sum;

return 0;

}
