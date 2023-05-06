#include <bits/stdc++.h>
using namespace std;

void pritnOnetoN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    pritnOnetoN(i + 1, n);
}

int main()
{

    int n;
    cin >> n;

    pritnOnetoN(1, n);

    return 0;
}
