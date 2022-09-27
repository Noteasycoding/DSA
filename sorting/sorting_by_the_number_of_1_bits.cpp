#include <bits/stdc++.h>
using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}

vector<int> sortByBits(vector<int> &arr)
{
    pair<int, int> m;
    vector<int> ans;
    int bits = 0;
    for (int i : arr)
    {
        bits = countBits(i);
        m.insert({i, bits});
    }

    return ans;
}

int main()
{

    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans;

    ans = sortByBits(arr);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

// 0,1,2,4,8,3,5,6,7
