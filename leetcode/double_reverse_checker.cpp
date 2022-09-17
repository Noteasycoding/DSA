#include<iostream>
using namespace std;

int main(){

      
        int ans = 0;
        int ans1 = 0;
        int num;
        cout<<"Enter the number:";
        cin>>num;
        int m = num;
        
        while(m != 0){
            
            int digit = m % 10;
            ans = (ans * 10) + digit;            
            m = m/10;
        }
        while(ans != 0){
            
            int digit = ans % 10;
            ans1 = (ans1 * 10) + digit;            
            ans = ans/10;
        }
        if(num == ans1){
            cout<<"True";
        }
        else{
            cout<<"false";
        }
}