#include<iostream>
using namespace std;

void power(int a, int b){

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout<<ans;    
        
    }

int main(){

    // int num, b;
    // cout<<"Number: ";
    // cin>>num;
    // cout<<"Power: ";
    // cin>>b;
    // int answer = power(5,2);
    power(5,2);

    // cout<<answer;

    return 0;

    
}