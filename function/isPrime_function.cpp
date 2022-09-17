#include<iostream>
using namespace std;

bool isPrime(int n){
    

    for (int i = 2; i < n; i++){

        if (n % i == 0){
            return 0;
        }
          
    }
    return 1;    
}

int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    // cout<<isPrime(num)<<endl;

    if(isPrime(num)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }


}