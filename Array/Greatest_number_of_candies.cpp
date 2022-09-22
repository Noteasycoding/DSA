#include<bits/stdc++.h>
using namespace std;

//------------First Approach------------------

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
    int total = 0;        
    vector<bool> cand;
    for(int i = 0; i < candies.size(); i++){
         total = candies[i] + extraCandies;
         bool mark = false;
         for(int j = 0; j < candies.size(); j++){
             if(total >= candies[j]){
                mark = true;
             }
             else{
                mark = false;
                break;
             }
         }
        cand.push_back(mark);
    }
    return cand;
}

//------------Second Approach------------------
/*
     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        vector<bool> cand;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxi){
                maxi = candies[i];
            }
        } 
        
        for(int j = 0; j < candies.size(); j++){
            if(candies[j] + extraCandies >= maxi){
                cand.push_back(true);
            }
            else{
                cand.push_back(false);
            }
        }
        return cand;
    }
 */
int main(){
 
    vector<bool>  kidsCandie;
    vector<int> candies;
    candies.push_back(2);
    candies.push_back(3);
    candies.push_back(5);
    candies.push_back(1);
    candies.push_back(3);

    kidsCandie = kidsWithCandies(candies, 3);

    for(auto i : kidsCandie){
        cout<<i <<" ";
    }
    

   
}
