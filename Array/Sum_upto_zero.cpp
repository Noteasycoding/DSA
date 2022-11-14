#include <bits/stdc++.h>
using namespace std;

vector<int> sumZero(int n)
{
    vector<int> ans;
    int size = n;
    for (int i = -n; i < size; i++)
    {
        if ((i + n) == 0)
        {
            ans.push_back(i + n);
        }
    }
    return ans;
}

void printArray(vector<int> nums)
{
    for (int i : nums)
    {
        cout << i;
    }
}

int main()
{

    int num = 5;
    // cout << "Enter the num:";
    // cin >> num;
    vector<int> ans = sumZero(num);
    printArray(ans);

    return 0;
}
