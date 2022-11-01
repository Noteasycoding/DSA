#include <bits/stdc++.h>
using namespace std;

// BruteForce Solution*************
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int num;
    cout << "Enter Num:";
    cin >> num;

    if (isPrime(num) && num != 1)
    {
        cout << "PRIME";
    }
    else
    {
        cout << "NOT PRIME";
    }

    return 0;
}
