#include <bits/stdc++.h>
using namespace std;

bool validator(string str)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            num1++;
            continue;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            num2++;
            continue;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            num3++;
            continue;
        }
        else
        {
            break;
        }
    }
    if (num1 > 0 && num2 > 0 && num3 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cout << "Enter Password:";

    getline(cin, str);

    if (validator(str))
    {
        cout << "Password is valid";
    }
    else
    {
        cout << "Password is invalid";
    }

    return 0;
}
