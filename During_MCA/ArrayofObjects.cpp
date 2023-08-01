#include<iostream>
#include<conio.h>
using namespace std;
class emp
{

    char name[20];
    int age;
public:
    void get_data();
    void put_data();
};

void emp :: get_data()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}

void emp::put_data()
{

cout<<"Name="<<name<<endl;
cout<<"Age="<<age;
}

const int size = 3;
void main()
{
    int i;
    emp[size];
    for(int i=0;i<size;i++)

{
cout<<"Details of emp"<<i+1;
e1[i].get_data();
}
cout<<endl;
for(int i=0;i<size;i++)
{
cout<<"\n Emp"<<i+1<<endl;
e1[i].put_data();
}
getch();
}
