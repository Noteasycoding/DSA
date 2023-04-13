#include <bits/stdc++.h>
using namespace std;

vector<string> pattern(int n)
{
    int row = 0;
    vector<string> ans;
    while (row < n)
    {

        int col = 0;
        while (col <= row)
        {
            ans.push_back("* ");
            col += 1;
        }
        row += 1;
    }
    return ans;
}

int main()
{
    int n = 0;
    cout << "Enter Number:";
    cin >> n;

    vector<string> result = pattern(n);

    for (auto row : result)
    {
        for (auto ch : row)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
