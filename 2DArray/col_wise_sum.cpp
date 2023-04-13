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

void ColSum(int arr[3][3])
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

void RowSum(int arr[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
        cout << endl;
    }
}

void printArray(int arr[][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3];
    cout << "Enter Element:" << endl;
    Input(arr);
    cout << endl;
    printArray(arr);
    cout << endl;
    cout << "Printing sum" << endl;
    ColSum(arr);
    RowSum(arr);
}
