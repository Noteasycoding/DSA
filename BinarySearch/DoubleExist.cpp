#include<iostream>
#include<vector>
using namespace std;

 bool checkIfExist(vector<int>& arr) {

        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                
                if(arr[i] == arr[j] * 2 && arr[j] != 0){
                    return true;
                }
            }
        }
        return false;
        
    }
 
int main(){
 
    vector<int> arr;
    arr.push_back(-2);
    arr.push_back(0);
    arr.push_back(10);
    arr.push_back(-19);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(-8);

    // for(int i : arr){
    //     cout<<i;
    // }

    cout<<checkIfExist(arr);

}
