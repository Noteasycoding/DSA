#include<iostream>
using namespace std;

double myPow(double x, int n) {
         
    double result = 1; 
    double result2 = 0;
    
        if(n>=0){
             for(int i = 0; i < n; i++){        
                result = result * x;
            }
            return result;
        }
        else{
            int y = 0;
            y = -1 * n;
    
        for(int i = 0; i < y; i++){        
        result = (result * x);
    }
    result2 = 1/result;
    return result2;
        }
    
   
    }

// double myPow(double x, int n){
    
//     double result = 1; 
//     double result2 = 0;

//     int y = 0;
//         y = -1 * n;
    
//         for(int i = 0; i < y; i++){        
//         result = (result * x);
//     }
//     result2 = 1/result;
//     return result2;

   
    
//    return 0;
// }

int main() {
	
     cout<<myPow(1.5, -2)<<endl;
   
       
	
}
