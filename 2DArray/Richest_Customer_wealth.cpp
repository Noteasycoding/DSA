#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int maxi = INT_MIN;
    for (int row = 0; row < accounts.size(); row++)
    {
        int sum = 0;
        for (int col = 0; col < accounts[0].size(); col++)
        {
            sum += accounts[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}

int main()
{

    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}};

    int maximum = maximumWealth(accounts);
    cout << "Richest Customer Wealth is :" << maximum;

    return 0;
}
