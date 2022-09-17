#include<iostream>
using namespace std;

int main()
{
  int i,N,a,b;
  cout<<"Enter the value:";
  cin>>i;
  cout<<"Enter the value of N:";
  cin>>N;
  if(i=N)
  {
      cout<<"Enter the Value of a:";
      cin>>a;
      if(i<a)
        cout<<"i is smaller than a";
      cout<<"Enter the value of B:";
      cin>>b;
      if(i<b)
        cout<<"i is smaller than B";
      else
        cout<<"i is greater than both";
  }

}
