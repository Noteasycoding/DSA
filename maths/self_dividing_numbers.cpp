#include<iostream>
#include<vector>
using namespace std;

bool digitCheck(int n){
    int digit = 0;
    int num = n;
    while(n > 0){
        digit = n%10;
        // if(digit == 0){
        //     return false;
        // }
        if(digit > 0 && num % digit == 0){
            n = n/10;
            continue;
        }
        else{
            return false;
        }
        
    }
    return true;
}

 vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        for(int i = left; i <= right; i++){
            if(i < 10){
                ans.push_back(i);
            }
            else{
                if(i % 10 == 0) continue;
                if(digitCheck(i)){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
 
int main(){
 
    vector<int> ans;

    ans = selfDividingNumbers(100, 111);

    for(int i : ans){
        cout<<i<<" ";
    }
 
}
