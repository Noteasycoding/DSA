#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    if (checkPalindrom(str))
    {
        cout << "Sstring is Palindrom";
    }
    else
    {
        cout << "String is not Palindrom";
    }

    return 0;
}