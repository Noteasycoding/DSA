#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    // vector<int> ans;
    int size = nums.size() - 1;
    for (int i = 0; i <= size; i++)
    {
        nums.push_back(nums[nums[i]]);
    }
    reverse(nums.begin(), nums.end());
    while (nums.size() - 1 > size)
    {
        nums.pop_back();
    }
    reverse(nums.begin(), nums.end());

    return nums;
}

int main()
{

    vector<int> arr = {0, 2, 1, 5, 3, 4};
    vector<int> ans = buildArray(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}
