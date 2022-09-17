#include<iostream>
#include<algorithm>
using namespace std;


int minimumSum(int num){
        string s = to_string(num);
        sort(s.begin(), s.end());
        int res = (s[0] - '0' + s[1] - '0')*10;
        int res2 = s[2] - '0' + s[3] - '0';
        return res + res2;
    }
 
int main(){
 
    cout<<minimumSum(2932);
 
}
