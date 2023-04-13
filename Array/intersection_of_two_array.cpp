#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size();)
        {
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> nums1;
    vector<int> nums2;
    vector<int> ans;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(2);
    nums1.push_back(1);

    nums2.push_back(2);
    nums2.push_back(2);

    ans = intersection(nums1, nums2);

    for (int i : ans)
    {
        cout << i << " ";
    }
}
