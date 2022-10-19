#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums, int x)
{
    int n = nums.size() - 1;
    int num = x;
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int count = -1;
    while (num >= 0)
    {
        if (nums[n] < num)
        {
            num = num - nums[n];
            nums.pop_back();
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{

    vector<int> nums{1, 1, 4, 2, 3};
    int x = 5;

    int result = minOperations(nums, x);

    return 0;
}
