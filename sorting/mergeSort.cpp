#include <bits/stdc++.h>
using namespace std;

void mergeArray(int arr[], int start, int mid, int end)
{
    int size = end - start + 1;
    int *temp = new int[size];

    int i = start, j = mid + 1, k = 0;

    // Merge the two sorted subarrays into temp[]
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements from the first subarray, if any
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements from the second subarray, if any
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy the sorted elements from temp[] back to arr[]
    for (int x = 0; x < size; x++)
    {
        arr[start + x] = temp[x];
    }

    delete[] temp;
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        // Sort first and second halves
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        mergeArray(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
