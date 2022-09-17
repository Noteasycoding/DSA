#include<iostream>
using namespace std;

int digitSquare(int n){
        int value = 0;
        while(n != 0){
            int digit = n % 10;
            value = value + (digit * digit);
            n = n / 10;            
        }
        return value;
    }

bool isHappy(int n) {
        while (n != 1 && n != 4) {
            n = digitSquare(n);
        }
        return n == 1;
    }
 
int main(){
 
    int num = 2;
    cout<<isHappy(num);
 
}
