#include <bits/stdc++.h>
using namespace std;

int binaryRecursive(int start, int end, vector<int> &arr, int target)
{
    if (start > end)
    {
        return -1; // Return -1 to indicate target not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid; // Return the index where the target is found
    }
    else if (arr[mid] < target)
    {
        return binaryRecursive(mid + 1, end, arr, target);
    }
    else
    {
        return binaryRecursive(start, mid - 1, arr, target);
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;
    int result = binaryRecursive(0, arr.size() - 1, arr, target);

    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
