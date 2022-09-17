#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(int arr[][4], int nRows, int mCols)
{ 
    vector<int> ans;
    for(int col = 0; col < mCols; col++){
        if(col&1){
            //odd index Bottom to top
            for(int row = nRows - 1; row >= 0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //0 or Even index top to bottom
            for(int row = 0; row < nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
      
    }
    return ans;
}

void Input(int arr[][4]){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < col; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    
}
int main(){
 
    int arr[3][4];
    Input(arr);
    cout<<wavePrint(arr, 3, 4);
 
}
