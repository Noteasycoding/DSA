#include<iostream>
#include<stack>
using namespace std;

string reverseWord(string s, int n){
   int start;
   int end = n;

   stack<string> st;
   string ans;

   for(start = 0; start <= end; start++){
     string word;

     if(s[start] == ' ' || s[start] < 48 && s[start] > 0 || s[start] > 122) continue;
     while(start < n) { 
         if(s[start] == ' ') break; 
                word += s[start]; 
                start++;
            }
            
            st.push(word);  
            
            
   }

   while(!st.empty()){
    ans += st.top(); 
    st.pop();
    if(!st.empty()) 
    {
        ans += ' ';
    }
   } 
    return ans;

}
 
int main(){

    string s = "Zaheer khan  string";    
    int n = s.length();
    cout<<reverseWord(s, n);


 
}
