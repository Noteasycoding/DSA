#include<iostream>
using namespace std;

int main(){
int i,N,num=0,sop=0,cop=0,son=0,con=0;
cout<<"Enter the number:";
cin>>N;

for(i=1;i<=N;++i){
cin>>num;
if(num>0)
    {sop=sop+num;
cop++;}
else
    {son=son+num;
 con++;
    }
}
cout<<"sum of +ve number:"<<sop<<endl;
cout<<"count of +ve number:"<<cop<<endl;
cout<<"sum of -ve number:"<<son<<endl;
cout<<"count of -ve number:"<<con<<endl;

}
