#include <bits/stdc++.h>
using namespace std;

vector<string> diamondPattern(int n)
{
    vector<string> pattern;
    int row = 0;

    while (row < n)
    {
        string singleRow = "";
        int col = 0;
        while (col <= row)
        {
            singleRow += "* ";
            col += 1;
        }
        row += 1;
        pattern.push_back(singleRow);
    }
    int row2 = 0;
    while (row2 < n - 1)
    {
        string singleRow = "";
        int col = 0;
        while (col <= n - row2 - 2)
        {
            singleRow += "* ";
            col += 1;
        }
        row2 += 1;
        pattern.push_back(singleRow);
    }

    return pattern;
}

int main()
{

    int n;
    cout << "Enter the number:";
    cin >> n;

    vector<string> pattern = diamondPattern(n);

    for (auto row : pattern)
    {
        for (auto ch : row)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
