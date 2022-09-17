#include<iostream>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()- 1;
        
        vector<int> ans;
        
        while(start < end){
            if(numbers[start] + numbers[end] == target){
                ans.push_back(numbers[start]);
                ans.push_back(numbers[end]);
                break;
            }
            else if( numbers[start] + numbers[end] > target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
 
int main(){
 
    vector<int> numbers;
    vector<int> ans;

    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);

    ans = twoSum(numbers, 9);

    for(int i: ans){
        cout<<i<<" ";
    }
 
}
