#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialisation
    int startRow = 0;
    int startCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        // Print starting row
        for (int index = startCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startRow][index]);
            count++;
        }
        startRow++;

        // Print ending col
        for (int index = startRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // Print ending row
        for (int index = endingCol; count < total && index >= startCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // Print Starting col
        for (int index = endingRow; count < total && index >= startRow; index--)
        {
            ans.push_back(matrix[index][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{
}
