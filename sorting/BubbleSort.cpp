#include <iostream>
using namespace std;

//********************************First Approach*********************************
// It takes number of iteraion always same even if array is fully sorted;

void bubbleSort_I(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            count++;
        }
        count++;
    }

    cout << "Size of the array: " << n << endl;
    cout << "Total Number Of Iteration: " << count << endl;
}

// ******************************Second Approach******************************

void bubbleSort_II(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            count++;
        }
        count++;
    }
    cout << "Size of the array: " << n << endl;
    cout << "Total Number Of Iteration: " << count << endl;
}

//***************************** Third Approach******************************
// It will Run only the number of element in the array in Best case

void bubbleSort_III(int arr[], int n)
{
    int count = 0;
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            count++;
        }
        count++;
        if (!swapped)
            break;
    }

    cout << "Size of the array: " << n << endl;
    cout << "Total Number Of Iteration: " << count << endl;
}

// Pritinting Array
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort_III(arr, size);
    printArray(arr, size);
}
