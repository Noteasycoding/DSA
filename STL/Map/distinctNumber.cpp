#include <bits/stdc++.h>
using namespace std;

int distinctNumber(vector<int> &v, int n)
{
    map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num = v[i];
        mp[num] = mp[num] + 1;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int n = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int res = distinctNumber(v, n);
    cout << res << endl;

    return 0;
}
