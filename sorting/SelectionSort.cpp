#include <iostream>
using namespace std;

// ********************Selection Sort ***************************
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minValue = i;
        for (int j = i + 1; j < n; ++j)
        {

            if (arr[j] < arr[minValue])
            {
                minValue = j;
            }
        }
        swap(arr[i], arr[minValue]);
    }
}

//****************Printin Array**********************
void printArray(int arr[], int n)
{
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";
}

int main()
{

    int arr[] = {12, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    printArray(arr, n);
}
