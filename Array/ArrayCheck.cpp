#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    arr[0] = 1;
    cout << "["
         << " ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "]";

    return 0;
}
