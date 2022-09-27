#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int row_size = image.size();
    int col_size = image[0].size();

    vector<vector<int>> ans;

    for (int row = 0; row < row_size; row++)
    {
        vector<int> temp;
        int res = 0;
        for (int col = col_size - 1; col >= 0; col--)
        {
            res = image[row][col] ^ 1;
            temp.push_back(res);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{

    vector<vector<int>> matrix{
        {1, 1, 0}, {1, 0, 1}, {0, 0, 0}

    };
    vector<vector<int>> ans;

    ans = flipAndInvertImage(matrix);

    return 0;
}
