#include<iostream>
#include<math.h>
using namespace std;

int main()
{   int unit;
    float charges,rate;
    cout<<"Enter the Units:";
    cin>>unit;
    if(unit<=100)
        cout<<"Unit rate:="<<"2.25"<<endl;
    else if(unit>100 && unit<=200)
        cout<<"Unit rate:="<<"3.75"<<endl;
    else if(unit>200 && unit<=300)
        cout<<"Unit rate:="<<"4.75"<<endl;
        else
        cout<<"Unit rate:="<<"5.25"<<endl;

        cout<<"Enter unit rate:=";
        cin>>rate;
        charges=unit*rate;

        cout<<"Charges:"<<charges;


    return 0;

}

