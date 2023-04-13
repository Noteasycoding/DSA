#include<iostream>
using namespace std;

void reverseString(char str[], int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
 
int getLength(char str[]){

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
 }
int main(){
 
    char str[] = "name";
    int n = getLength(str);

    reverseString(str, n);

    cout<<str;
 
}
