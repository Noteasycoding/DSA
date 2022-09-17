#include<iostream>
using namespace std;

class student
{
    int a;
    public:
    void set(int x)
    {
        this-> a=x;
    }
    void show()
    {
        cout<<a;
    }

};
main()
{
    student S1;
    S1.set(5);
    S1.show();
}
