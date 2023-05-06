#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    reverse(0, arr, n);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
