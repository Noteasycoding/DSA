#include<iostream>
using namespace std;

int isPrime(int n){

    int count = 0;
    

    for (int i = 2; i < n; i++){

        if (n % i != 0){
            count++;
        // }
        // else{
        //     // cout<<"Prime"<<endl;
            
      }
          
    }
    return count;    
}

int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    // cout<<isPrime(num)<<endl;

    // if(isPrime(num)){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }
    cout<<isPrime(num);

}