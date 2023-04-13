#include <bits/stdc++.h>
using namespace std;

bool rowSum(int arr[][3], int n, int diSum1)
{
    for (int row = 0; row < n; row++)
    {
        int sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum += arr[row][col];
        }
        if (sum != diSum1)
        {
            return false;
        }
    }
    return true;
}

bool colSum(int arr[][3], int n, int diSum1)
{
    for (int col = 0; col < n; col++)
    {
        int sum = 0;
        for (int row = 0; col < n; col++)
        {
            sum += arr[row][col];
        }
        if (sum != diSum1)
        {
            return false;
        }
    }
    return true;
}

bool isMagicSquare(int arr[][3], int n)
{

    int diSum1 = 0;
    int diSum2 = 0;
    for (int i = 0; i < n; i++)
    {
        diSum1 += arr[i][i];
        diSum2 += arr[i][n - i - 1];
    }
    if (diSum1 == diSum2)
    {
        if (colSum(arr, n, diSum1) == true && rowSum(arr, n, diSum1) == true)
        {
            return true;
        }
        return false;
    }
    return false;
}

void Input(int arr[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
}
int main()
{

    int arr[3][3];
    cout << "Input element in array:" << endl;
    Input(arr);

    bool result = isMagicSquare(arr, 3);

    cout << result;
}
