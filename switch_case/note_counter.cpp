#include<iostream>
using namespace std;

int main(){

    int amount;
    int n10, n20, n50, n100, n500;

    n10 = n20 = n50 = n100 = n500 = 0;

    cout<<"Enter amount : ";
    cin>>amount;

    // switch(amount >= 500){

    //     case 1: n500 = amount/500;
    //     amount -= n500 * 500;
    //     break;
    //     }

    // switch(amount >= 100){

    //     case 1: n100 = amount/100;
    //     amount -= n100 * 100;
    //     break;
    //     }

    // switch(amount >= 50){
    //     case 1: n50 = amount/50;
    //     amount -= n50 * 50;
    //     break;
    //     }
        
    // switch(amount >= 20){
    //     case 1: n20 = amount/20;
    //     amount -= n20 * 20;
    //     break;
    //     }

    // switch(amount >= 10){
    //     case 1: n10 = amount/10;
    //     amount -= n10 * 10;
    //     break;
    //     }

    //     cout << "500 = " << n500 <<endl;
    //     cout << "100 = " << n100 <<endl;
    //     cout << "50 = " << n50 <<endl;
    //     cout << "20 = " << n20 <<endl;
    //     cout << "10 = " << n10 <<endl;
   
    switch(1){


        case 1: n500 = amount/500;
        amount -= n500 * 500;
        cout << "500 = " << n500 <<endl;         
  
        case 2: n100 = amount/100;
        amount -= n100 * 100;
        cout << "100 = " << n100 <<endl;
        
        case 3: n50 = amount/50;
        amount -= n50 * 50;
        cout << "50 = " << n50 <<endl;
            
        case 4: n20 = amount/20;
        amount -= n20 * 20;
        cout << "20 = " << n20 <<endl;
        
        case 5: n10 = amount/10;
        amount -= n10 * 10;
        cout << "10 = " << n10 <<endl;
    
    }

}
