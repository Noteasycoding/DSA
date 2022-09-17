#include<iostream>
using namespace std;

class Student
{private:
    int roll_no;
protected:
    char course[10];
public:
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
    class Result: public Student
    {
private:
    int marks[3];
public:
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
        for(int i=0; i<3;i++)
            cin>>marks[i];
        }
        int Result:: total()
        {
        cin.getline(course,10);
            int tot_marks=0;
            for(int i=0;i<3;i++)
                tot_marks += marks[i];
            return tot_marks;

        }
        main()
        {
        Result R;
        R.get_data();
        R.display();
        }


