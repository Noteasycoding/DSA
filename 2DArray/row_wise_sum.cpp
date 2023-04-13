#include <iostream>
using namespace std;

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

void printSum(int arr[][3], int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][3], int row, int col)
{

    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "The maximum row sum is:" << maxi << endl;
    return rowIndex;
}

int main()
{

    int arr[3][3];
    cout << "Input element in array:" << endl;
    Input(arr);

    cout << "Printing Sum:" << endl;
    printSum(arr, 3, 3);

    int rowIndex = largestRowSum(arr, 3, 3);
    cout << "At index:" << rowIndex;
}
