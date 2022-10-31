#include <iostream>
using namespace std;

int Position(int arr[], int size, int key, bool condition)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            if (condition)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int arr[] = {1, 2, 2, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    int first = Position(arr, n, 5, true);
    int last = Position(arr, n, 5, false);

    cout << first << endl;
    cout << last << endl;

    // if(first == -1 && last == -1){
    //     cout<<0;
    // }
    cout << (last - first) + 1;
}
