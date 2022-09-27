#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int duplicate_int = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            duplicate_int++;
        }
        else
        {
            nums[i - duplicate_int] = nums[i];
        }
    }
    nums.erase(nums.end() - duplicate_int, nums.end());
    return nums.size();
}

int main()
{

    // Array is non decending order

    vector<int> nums{0, 0, 1, 1, 2, 2, 3, 3, 4, 4};
    int size = removeDuplicates(nums);
    cout << size << endl;
    for (int i : nums)
    {
        cout << i << " ";
    }

    return 0;
}
