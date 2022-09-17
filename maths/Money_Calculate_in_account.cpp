#include<iostream>
using namespace std;

int totalMoney(int n) {
        int sum = 0;
        int j = 2;
        int k = 1;
        for(int i = 1; i <= n; i++){
            if(i > 7){
                n = n - (i - 1);
                i = 0;
                k = j;
                j++;
            }
           else{
            sum = sum + k;
            k++;
           }
          

        }
        return sum;
    }
 
int main(){
 
    cout<<totalMoney(10); 
 
}
