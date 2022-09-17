#include<iostream>
using namespace std;


 bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i = left; i <= right; i++){
            int count = 0;
            int j = i;
            while(j != 0){
                if(j & 1){
                    count++;
                }
                j = j >> 1;
            }
            if(isPrime(count)){
                res++;
            }
            
        }
        return res;
}
 
int main(){
 
    cout<<countPrimeSetBits(6, 10);
 
}
