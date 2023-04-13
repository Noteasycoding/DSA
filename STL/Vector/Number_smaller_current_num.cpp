#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> smaller;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
                count++;
        }

        smaller.push_back(count);
    }
    return smaller;
}

int main()
{

    vector<int> nums;
    vector<int> ans;

    nums.push_back(8);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    ans = smallerNumbersThanCurrent(nums);

    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
