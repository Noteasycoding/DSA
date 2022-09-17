#include<iostream>
using namespace std;

int sqrt(long long int num){
    int start = 0;
    unsigned int end = num/2;
    long long int mid = start + (end - start)/2;


    int ans = - 1;
    while(start <= end){
        
        if(mid * mid == num){
            return mid;
        }
        else if(mid * mid < num){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
 
int main(){
 
    cout<<sqrt(4);
 
}
