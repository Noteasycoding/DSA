#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{

    int arr[] = {6, 1, 2, 3, 4, 5};
    int pivot = getPivot(arr, 6);
    cout << pivot;
}
