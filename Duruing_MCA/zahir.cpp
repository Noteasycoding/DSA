#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int Math,Physics,Chemistry,Hindi,sum,per;
cout<<"Enter the marks in Maths:";
cin>>Math;
cout<<"Enter the marks in Physics:";
cin>>Physics;
cout<<"Enter the  marks in Chemistry:";
cin>>Chemistry;
cout<<"Enter the marks in Hindi:";
cin>>Hindi;
sum = Math+Physics+Chemistry+Hindi;
cout<<"Total Marks:"<<sum<<endl;
per = sum*100/400;
cout<<"Total Percentage:"<<per<<endl;

if (per>=80)
    cout<<"Grade A";
else if(per<80 && per>=65)
    cout<<"Grade B";
  else if(per<65 && per>=55)
        cout<<"Grade C";
        else if(per<55 && per>50)
            cout<<"Grade D";

    else
        cout<<"Grade fail";


    return 0;

}
