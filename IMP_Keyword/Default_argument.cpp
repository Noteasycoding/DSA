#include <bits/stdc++.h>
using namespace std;

// Note: if you want to declare default argument you have declare from right side

void print(int arr[], int size, int start = 0)
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 4, 7, 8, 9};
    print(arr, 5, 2);

    return 0;
}
