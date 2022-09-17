#include<iostream>
using namespace std;

int reverseNum(int n){

    int digit = 0;
    int ans = 0;
    while (n > 0)
    {
        digit = n % 10;
        ans = (ans * 10) + digit;
        n = n/10;
    }
    return ans;
    
}
 
int main(){
 
    int num;
    cout<<"Enter the number:";
    cin>>num;

    cout<<reverseNum(num);
 
}
