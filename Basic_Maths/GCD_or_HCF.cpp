#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return b;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{

    int num1, num2;
    cout << "Enter values of num1 and num2:";
    cin >> num1 >> num2;
    int ans = gcd(num1, num2);
    cout << ans;

    return 0;
}
