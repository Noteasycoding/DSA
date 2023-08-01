#include<iostream>
using namespace std;

class student
{
    public:

        int std_id;
       string name;
        void get_data()
        {
            cout<<"Enter student id :";
            cin>>std_id;
            cout<<"\n Enter name:";
            cin>>name;
        }
        void show_data()
        {
            cout<<"\n STUDENT ID:"<<std_id;
            cout<<"\n NAME:"<<name;
        }


};
main ()
{student A;
A.get_data();
A.show_data();
}

