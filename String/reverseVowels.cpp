#include<iostream>
using namespace std;

bool isvowel(char ch){
        if(ch=='a' || ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            return true;
        return false;
    }

string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        int temp1 = 0;
        int temp2 = 0;
        
        string str;
        while(start < end){
            
            if(!isvowel(s[start])){
                start++;
                continue;
            }
            else if(!isvowel(s[end])){
                end--;
                continue;
            }
            
            else{
                swap(s[start], s[end]);
                start++;
                end--;
            }
        
            
            
        }
        
        return s;
        
    }
 
int main(){
 
    string s = "leetcode";
    cout<<reverseVowels(s);

 
}
