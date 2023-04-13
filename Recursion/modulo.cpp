#include <bits/stdc++.h>
using namespace std;

int moduloUsingRecursion(int dividend, int divisor)
{
    if (dividend >= divisor)
    {
        return moduloUsingRecursion(dividend - divisor, divisor);
    }
    return dividend;
}

int main()
{

    int divisor, dividend;
    cin >> dividend >> divisor;

    cout << moduloUsingRecursion(dividend, divisor);

    return 0;
}
