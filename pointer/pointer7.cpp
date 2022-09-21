#include<iostream>
using namespace std;
 
int main(){
 
   int a = 10;
   int *p = &a;

   cout<<sizeof(a)<<endl;
   cout<<"Size of integer pointer :"<<sizeof(p)<<endl;

   float b = 20;
   float *q = &b;
   cout<<sizeof(b)<<endl;
   cout<<"Size of float pointer :"<<sizeof(q)<<endl;

   char ch = 'A';
   char *r = &ch;
   cout<<sizeof(ch)<<endl;
   cout<<"Size of char pointer :"<<sizeof(r)<<endl;

 
}
