#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "Enter Num:";
    cin >> num;
    vector<int> fib = {0, 1};

    if (num == 0)
    {
        cout << 0;
    }
    else if (num == 1)
    {
        cout << 0 << " " << 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            fib.push_back(fib[i - 2] + fib[i - 1]);
        }
    }

    for (int i : fib)
    {
        cout << i << " ";
    }

    return 0;
}
