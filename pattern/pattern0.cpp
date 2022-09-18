#include<iostream>
using namespace std;

/*
11
222
3333
44444
555555
6666666
*/
int main(){

    int num;
    cout<<"Enter Num:";
    cin>>num;
    
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= row; col++){
            cout<<row;
        }
        cout<<endl;
    }
    
  
}

