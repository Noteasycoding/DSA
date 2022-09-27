#include <iostream>
#include <vector>
using namespace std;

//  when array is sorted row wise;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int start = 0;
    int row = matrix.size();
    int col = matrix[0].size();

    int end = (row * col) - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        else if (target > element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{

    vector<vector<int>> matrix{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}

        // {1,6,11,16,21},
        // {2,7,12,17,22},
        // {3,8,13,18,23},
        // {4,9,14,19,24},
        // {5,10,15,20,25}
    };

    if (searchMatrix(matrix, 16))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}
