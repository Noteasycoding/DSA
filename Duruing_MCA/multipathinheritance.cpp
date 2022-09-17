#include<iostream>
using namespace std;
class student
{
protected:
    int roll_no;
    char name[20];
public:
    void get_Stud_data()
    {
        cout<<"\n Enter the roll number:";
        cin>>roll_no;
        cout<<"\n Enter the name:";
        cin.ignore();
        cin.getline(name,20);
}
    void show_Stud_data()
    {
        cout<<"\n ROLL NUMBER:"<<roll_no;
        cout<<"\n NAME:"<<name;
    }
};
class Tests:virtual public student
{
protected:
    int marks[3];
public:
    void get_Marks()
    {
        cout<<"\n Enter the marks in three subjects:";
        cin>>marks[0]>>marks[1]>>marks[2];
    }
    int total_marks()
    {
        return(marks[0]+marks[1]+marks[2]);
    }
};
class Activities: virtual public student
{
protected:
    int acts[2];
public:
    void get_Acts_Score()
    {
        cout<<"\n Enter the score in two Activities:";
        cin>>acts[0]>>acts[1];

    }
    int total_score()
    {
        return(acts[0]+acts[1]);
    }
};
class Result: public Tests,public Activities
{
public:
    void show_total()
    {
        cout<<"\n TOTAL:"<<total_marks()+total_score();

    }

};
main()
{
    Result R;
    R.get_Stud_data();
    R.get_Marks();
    R.get_Acts_Score();
    R.show_Stud_data();
    R.show_total();
}
