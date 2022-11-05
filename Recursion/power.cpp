#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Relation
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "Enter Power:";
    cin >> n;
    int ans = power(n);
    cout << ans;

    return 0;
}
