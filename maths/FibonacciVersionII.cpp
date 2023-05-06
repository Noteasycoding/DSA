#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n)
{
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (auto i : f)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Nth a fibonacci NUmber: ";
    return f[n];
}

int main()
{

    int n;
    cin >> n;

    cout << fibonacciNumber(n);

    return 0;
}
