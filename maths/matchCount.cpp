#include<iostream>
using namespace std;

 int numberOfMatches(int n) {
        int match = 0;
        int advance = n;
        int ans = 0;
        
        
        while(advance >= 2){
            if(advance & 1){
                match = (advance - 1)/2;
                advance = (advance - 1)/2 + 1;
                ans = ans + match;
                
            }
            else{
                match = advance/2; 
                advance = advance/2;
                ans = ans + match;
                
            }
        }
        return ans;
    }
 
int main(){
 
    cout<<numberOfMatches(7);
 
}
