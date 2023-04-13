#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    int i = 0;

    while (i < n)
    {
        temp[(i + k) % n] = nums[i];
        i++;
    }
    nums = temp;
}

void printArray(vector<int> nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> nums;

    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    rotateArray(nums, 5);
    printArray(nums);
}
