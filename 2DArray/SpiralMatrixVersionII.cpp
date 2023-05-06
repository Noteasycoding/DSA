#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix(int n)
{
    vector<vector<int>> spiral(n, vector<int>(n));
    int count = 1;
    int total = n * n;

    // Index Initialization
    int stRow = 0, stCol = 0, endRow = n - 1, endCol = n - 1;

    while (count <= n)
    {
        // Starting Row
        for (int col = stCol; col < endCol; col++)
        {
            spiral[stRow][col] = count++;
        }
        stRow++;

        if (n > total)
            break;

        // Ending Column
        for (int row = stRow; row < endRow; row++)
        {
            spiral[row][endCol] = count++;
        }
        endCol--;

        if (n > total)
            break;
        // Ending Row
        for (int col = endCol; col >= stCol; col--)
        {
            spiral[endRow][col] = count++;
        }
        endRow--;

        // Starting Column
        for (int row = endRow; row >= stRow; row--)
        {
            spiral[row][stCol] = count++;
        }
        stCol++;
    }
    return spiral;
}

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> matrix = spiralMatrix(n);

    for (auto &row : matrix)
    {
        for (auto &col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
