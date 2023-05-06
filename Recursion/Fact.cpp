#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = fact(n);
    cout << "The factorial of number " << n << " is: " << ans;

    return 0;
}
