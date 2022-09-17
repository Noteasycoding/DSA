#include<iostream>
using namespace std;

 int fib(int n) {
        
        int x = n;
        int sum = 0;
        while(x > 1){
            sum = (x - 1) + (x - 2);
            x = (2*x) - 3;
        }
        return sum;
    }
 
int main(){
 
    cout<<fib(3);
 
}
