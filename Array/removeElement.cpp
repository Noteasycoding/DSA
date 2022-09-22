#include<iostream>
#include<vector>
using namespace std;


 int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        int i = 0;
        while(i < j){
             if(val == nums[i]){
                if(val == nums[j]){
                    j--;
                    i--;
                }
                else{
                    swap(nums[j], nums[i]);
                    j--;
                    
                }
                
            }
            i++;
        }
        
        
        for(int k = nums.size() - 1; k >= 0; k--){
            if(val == nums[k]){
                nums.pop_back();
            }
        }
        
        return nums.size() - 1;
    }
 
int main(){
    
    vector<int> ans;
    ans.push_back(3);
    ans.push_back(2);
    ans.push_back(2);
    ans.push_back(3);

    cout<<removeElement(ans, 3);

    
    
 
}
