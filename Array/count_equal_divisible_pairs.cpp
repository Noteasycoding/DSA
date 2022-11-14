#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int k)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if ((nums[i] == nums[j]) && ((i * j) % k == 0))
            {
                count += 1;
            }
        }
    }
    return count;
}

int main()
{

    vector<int> nums = {5, 5, 9, 2, 5, 5, 9, 2, 2, 5, 5, 6, 2, 2, 5, 2, 5, 4, 3};
    int k = 0;
    cout << "Enter the num:";
    cin >> k;
    int pairs = countPairs(nums, k);
    cout << pairs;

    return 0;
}
