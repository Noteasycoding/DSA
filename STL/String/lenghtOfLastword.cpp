#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    
        int end = s.length() - 1;
        
        string word;
        for(int i = end; i >= 0; i--){            
            
            if(s[i] == ' ') continue;

            while(i >= 0) {
                if(s[i] == ' ') break;
                word += s[i];                
                i--;
            }
            break;
            
        }
        return word.length();
       
    }
 
int main(){
 
    string s = "a";
    cout<<lengthOfLastWord(s);

 
}
