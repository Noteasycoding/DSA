#include<iostream>
using namespace std;

int main() {
	
    int n;
    cin>>n;
    
    int sum_even = 0;
    int sum_odd = 0;
    
    while(n > 0){
        
        int num = n % 10;
        if(num%2==0){
            sum_even = sum_even + num;
        }
        else{
            sum_odd = sum_odd + num;
        }
        cout<<num<<" ";
        
        n = n/10;
    }
    cout<<endl;
    cout<<sum_even<<endl;
    cout<<sum_odd;
    
	
}
