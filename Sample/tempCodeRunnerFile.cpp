#include<iostream>
using namespace std;

int main() {
	
    int number;
    cin>>number;
    int power;
    cin>>power;
  
    
    for(int i = 1; i < power; i++){
        
        number = number * power;
    }
    
    cout<<number;
	
}
