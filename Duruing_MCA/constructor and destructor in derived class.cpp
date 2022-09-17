#include<iostream>
using namespace std;
class Student{
private:
    int roll_no;
protected:
    char course[10];
public:
    Student()
    {
        cout<<"\n In Student's Constructor:";
        roll_no =0, course[0]='\0';
        }
        ~Student()
        {
            cout<<"\n In Student's Destructor:";
        }
        void get_rno()
        {
            cout<<"\n Enter the roll number:";
            cin>>roll_no;
        }
        void show_rno()
        {
            cout<<"\n ROLL NO:"<<roll_no;
        }
};
class Result: protected Student
{
private:
    int marks[3];
public:
    Result()
    {
        cout<<"\n In Result's Contructor";
        marks[0]=marks[1]=marks[2]=0;
    }
    ~Result()
    {
        cout<<"\n In Result's Destructor:";
    }
    void get_data();
    int total();
    void display()
    {
        show_rno();
        cout<<"\n COURSE:"<<course;
        cout<<"\n TOTAL MARKS:"<<total();
    }
};
void Result::get_data()
{
    get_rno();
    cout<<"\n Enter the course:";
    cin.ignore();
    cin.getline(course,10);
    cout<<"\n Enter marks in three subjects:";
    for(int i=0;i<3;i++)
        cin>>marks[i];
}
int Result::total()
{
    int tot_marks=0;
    for(int i=0;i<3;i++)
        tot_marks=tot_marks +marks[i];
    return tot_marks;
}
main()
{
    Result R;
    R.get_data();
    R.display();
}

