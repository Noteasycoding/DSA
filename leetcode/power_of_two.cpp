#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;

    /*

    for(int i = 0; i <= 30; i++){
        int ans = pow(2, i);

        if (ans == n)
        {
            cout<<"true";
        }
        
    cout<<"false";
    }
    */
    int ans = 1;
    for(int i = 0; i <= 30; i++){
        
        if (ans == n){
            
            cout<<"true";
        }
        if(ans < INT_MAX/2){

            ans = ans * 2;
        }

        
    }
    cout<<"false";

}
        
        
    
    