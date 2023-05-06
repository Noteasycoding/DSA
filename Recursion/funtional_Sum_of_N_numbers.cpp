#include <bits/stdc++.h>
using namespace std;

int sumOfNnumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfNnumbers(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = sumOfNnumbers(n);
    cout << "The sum of the N numbers is: " << sum;

    return 0;
}
