#include <bits/stdc++.h>
using namespace std;

void sumOfNnumbers(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum of N numbers is: " << sum;
        return;
    }
    sumOfNnumbers(i - 1, sum + i);
}

int main()
{

    int n;
    cin >> n;

    sumOfNnumbers(n, 0);

    return 0;
}
