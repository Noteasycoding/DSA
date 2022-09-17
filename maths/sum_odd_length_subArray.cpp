#include<iostream>
#include<vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int sum2 = 0;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            int j = i + 1;
            int k = i + 2;
            if(k < arr.size()){
               sum = arr[i] + arr[j] + arr[k];
               ans = ans + sum; 
            }
            
            if(arr.size() & 1 && j < arr.size()){
                sum2 = arr[i] + arr[j];
                ans = ans + sum2;
            }
        }
        return ans;
    }
 
int main(){
 
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(3);

    cout<<sumOddLengthSubarrays(arr);

 
}
