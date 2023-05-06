#include <bits/stdc++.h>
using namespace std;

vector<int> productArray(vector<int> arr)
{
    int n = arr.size();

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int product = 1;
        int con = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                if (con == false)
                {

                    continue;
                    con = true;
                }
            }
            else
            {
                product *= arr[j];
            }
        }
        ans.push_back(product);
    }

    return ans;
}

int main()
{

    vector<int> arr = {10, 3, 5, 0, 0};

    vector<int> ans = productArray(arr);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
