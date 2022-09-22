#include<bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        int start = 0;
        int end = operations.size();
        
        while(start < end){
            if(operations[start] == "++X" || operations[start] == "X++"){
                value++;
            }
            else {
                value--;
            }
            start++;
        }
        return value;
    }
 
int main(){
    
    vector<string> operations;
    operations.push_back("++X");
    operations.push_back("X++");
    operations.push_back("--X");
    operations.push_back("X--");
    int value = finalValueAfterOperations(operations);
    cout<<value<<endl;
 
    return 0;
}
