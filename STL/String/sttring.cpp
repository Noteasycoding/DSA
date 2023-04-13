#include<iostream>
using namespace std;
 
int main(){
 
    // char ch[20];
    // cout<<"Enter your name->";
    // cin>>ch;                    // cin stop execution while encounter space, newline , tab;
    // cin.getline(ch,20);         //to overcome this problem we can use cin.getlilne
    // cout<<ch; 



    char y_name[60], y_address[120], about_y[100];
  
    cout << "Enter your name: ";
    cin.getline (y_name, 60);
    
    cout << "Enter your City: ";
    cin.getline (y_address, 120);
  
    cout << "Enter your profession (press $ to complete): ";
    cin.getline (about_y, 100, '$');    //$ is a delimiter 
  
    cout << "\nEntered details are:\n"<<'\n';
    cout << "Name: " << y_name << endl;
    cout << "Address: " << y_address << endl;
    cout << "Profession is: " << about_y << endl;
 
}
