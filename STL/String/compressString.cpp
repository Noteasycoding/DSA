#include <bits/stdc++.h>
using namespace std;

string compress(string s)
{
    string str = "";
    int count = 1;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            str += s[i - 1];
            str += to_string(count);
            count = 1;
        }
    }
    return str;
}

int main()
{

    string s;
    cin >> s;

    string result = compress(s);
    cout << result;

    return 0;
}
