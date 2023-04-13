#include<iostream>
using namespace std;


int convert(string s){
        switch(s){
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
        }
        
    }
    
// int romanToInt(string s) {
        
//     }
 
int main(){
 
 string roman;
 cout<<"Enter Number:";
 cin>>roman;

 cout<<convert(roman);
    
 
}
