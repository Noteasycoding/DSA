#include<iostream>
using namespace std;

int numberOfSteps(int num) {
        int ans = num;
        int count = 0;
        while(ans != 0){
            // int ans = num/2;
            if(ans & 1){
                ans = ans - 1;
                count++;
            }
            else{
                ans = ans/2;
                count++;
            }
        }
        return count;
    }
 
int main(){
 
    cout<<numberOfSteps(14);
 
}
