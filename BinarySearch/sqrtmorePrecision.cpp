#include<iostream>
using namespace std;

double precision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int sqrt(long long n){
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;    
    long long int ans;
    
    while(start <= end){
        long long sq = mid * mid;
        if(sq == n){
            return mid;
        }
        else if(sq < n ){            
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


    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int d;
    cout<<"Enter the precision ";
    cin>>d;

    int tempSol = sqrt(n);
    cout<<precision(n, d, tempSol);   
 
}

