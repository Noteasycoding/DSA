#include <iostream>
using namespace std;

// void getValue(int arr[], int size){

//     int value = 0;
//     for (int i = 0; i < size; i++)
//     {
//         // cout<<"Enter value:";
//         cin>>value;
//         arr[i] = value;
//     }

// }

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int size)
{

    // int start = 0;
    int end = size - 1;

    for (int start = 0; start <= end; start++, end--)
    {
        swap(arr[start], arr[end]);

        // using temp variable

        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];

        // arr[start] = arr[start] ^ arr[end];
        // arr[end] = arr[start] ^ arr[end];
        // arr[start] = arr[start] ^ arr[end];
    }
}

int main()
{

    int arr[6] = {2, 3, 4, 5, 6, 9};
    int brr[8] = {0, 9, 6, 5, 4, 3, 2, 11};

    // getValue(arr, 10);
    reverseArray(arr, 6);
    printArray(arr, 6);
    cout << endl;
    reverseArray(brr, 8);
    printArray(brr, 8);
}
