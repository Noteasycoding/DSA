#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{

    int num = 5;
    cout << "Enter Num:";
    cin >> num;

    int ans = factorial(num);
    cout << "The factorial of " << num << " is:" << ans;

    return 0;
}
