#include <bits/stdc++.h>
using namespace std;

// Inline Funtion: It raplace funtion call with the body of the funtion
// It reduce funtion overhead
// No Extra memory usage

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
