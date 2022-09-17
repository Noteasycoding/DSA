#include<iostream>
using namespace std;

int main(){

    int input = 0;
    int num = 2;

        
    cout<<"Enter input:";
    cin>>input;
    

    while(num < input){
        if(input % num == 0){
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;

        }
        num = num + 1;
    }


    return 0;


}