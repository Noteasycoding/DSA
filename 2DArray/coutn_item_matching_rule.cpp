#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int row_size = items.size();
    int col_size = items[0].size();
    int count = 0;
    for (int col = 0; col < col_size; col++)
    {
        for (int row = 0; row < row_size; row++)
        {
            if (ruleKey == "type" && col == 0)
            {
                if (items[row][col] == ruleValue)
                    count++;
            }
            else if (ruleKey == "color" && col == 1)
            {
                if (items[row][col] == ruleValue)
                    count++;
            }
            else if (ruleKey == "name" && col == 2)
            {
                if (items[row][col] == ruleValue)
                    count++;
            }
            else
            {
                break;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<string>> items{
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"}};

    string ruleKey = "color";
    string ruleValue = "silver";
    int ans = countMatches(items, ruleKey, ruleValue);
    cout << ans;

    return 0;
}
