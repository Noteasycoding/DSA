#include <cmath>
#include<iostream>
using namespace std;

int main() {
    
    double basic;
    cin>>basic;
    char grade;
    cin>>grade;
    
    double hra = 0.2 * basic;
    double da = 0.5 * basic;
    double pf = 0.11 * basic;
    double salary = basic + hra + da - pf;
    double total_salary;
    
    if(grade == 'A'){
        
        total_salary = salary + 1700;
        cout<<round(total_salary);
    }
    else if(grade == 'B'){
        
        total_salary = salary + 1500;
        cout<<round(total_salary);
    }
    else if(grade == 'C'){
        
        total_salary = salary + 1300;
        cout<<round(total_salary);
    }
	
}
