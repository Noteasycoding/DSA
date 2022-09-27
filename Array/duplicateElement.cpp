#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << findDuplicate(arr, size);
}
