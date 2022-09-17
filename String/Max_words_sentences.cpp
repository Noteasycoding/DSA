#include<iostream>
#include<vector>
using namespace std;

int wordCount(string s){
        int count = 1;
        int end = s.length() - 1;
        int start = 0;
        while(start <= end){
            if(s[start] > 'a' && s[start] < 'z') start++;
            else if (s[start] == ' ') {
                count++, start++;
            }
            else start++;
        }
        return count;
    }

int mostWordsFound(vector<string>& sentences) {
        int size = sentences.size() -1;
        int maxi = INT_MIN;
        
        int i = 0;
        while(i <= size){
            int count = wordCount(sentences[i]);
            if(count > maxi){
                maxi = count;
                i++;
            }
            else{
                i++;
            }
            
        }
        
        return maxi;
    }
 
int main(){

    vector<string> sentences;

    sentences.push_back("alice and bob love leetcode");
    sentences.push_back("i think so too");
    sentences.push_back("this is great thanks very much");

    int most_word = mostWordsFound(sentences);
    cout<<most_word;
    
 
}
