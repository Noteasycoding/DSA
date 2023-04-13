#include<iostream>
using namespace std;

// string removeDuplicates(string s) {
        
//         int size = s.length() - 1;
        
//         int i = 0;
        
//         while(i < size){
//             if(s[i] == s[i + 1]){
//                 s.erase(i, 2);
//                 size-=2;

//                 if(i!=0){
//                     i=i-2;
//                 }
//                 else{
//                     i--;
//                 }                
//             }
//             i++;
            
//         }
        
//         return s;
//     }

string removeDuplicates(string s){

    int i = 0, n = s.length();
        for (int j = 0; j < n; ++j, ++i) {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i]) // count = 2
                i -= 2;
        }
        return s.substr(0, i);
}
 
int main(){
 
    string s = "abbaacddcababbaacddcababbaacddcab";
    cout<<removeDuplicates(s);
 
}
