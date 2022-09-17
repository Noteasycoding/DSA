#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        int temp = x;
        int ans = 0;
        while(temp > 0){
            
            int digit = temp %10;
            ans = (ans * 10) + digit;            
            temp = temp/10;            
        }
        if(ans == x){
            return 1;
        }
        else return 0;
        
}

int main(){

    isPalindrome(121);
}

