#include <bits/stdc++.h>
using namespace std;

int main()
{

    char arr[10] = "abc abd ab a";

    // vector<string> vec("abc abd ab a");
    int n = 8;

    sort(arr, arr + n);

    for (int i : arr)
    {
        char a = i;
        cout << a;
    }
}
