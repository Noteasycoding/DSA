#include <bits/stdc++.h>
using namespace std;

// BruteForce Solution**************
void print_divisors(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Optimal Solution************
void print_divisors_optimal(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (i != num / i)
            {
                cout << num / i << " ";
            }
        }
    }
}

int main()
{

    int num;
    cout << "Enter the num:";
    cin >> num;
    print_divisors(num);
    cout << endl;
    print_divisors_optimal(num);

    return 0;
}
