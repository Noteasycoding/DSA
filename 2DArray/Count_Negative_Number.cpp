#include <iostream>
#include <vector>
using namespace std;

//  when array is sorted row wise;

int countNegatives(vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();

    int rowIndex = row - 1;
    int colIndex = col - 1;
    int count = 0;

    while (rowIndex >= 0 && colIndex >= 0)
    {
        int element = grid[rowIndex][colIndex];
        if (element < 0)
        {
            colIndex--;
            count++;
            if (colIndex < 0)
            {
                rowIndex--;
                colIndex = col - 1;
            }
        }
        else
        {
            rowIndex--;
            colIndex = col - 1;
        }
    }
    return count;
}

int main()
{

    vector<vector<int>> matrix{
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3},

        // {1,6,11,16,21},
        // {2,7,12,17,22},
        // {3,8,13,18,23},
        // {4,9,14,19,24},
        // {5,10,15,20,25}
    };

    int count = countNegatives(matrix);
    cout << count;
}
