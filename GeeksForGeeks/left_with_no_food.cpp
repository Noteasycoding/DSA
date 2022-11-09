#include <bits/stdc++.h>
using namespace std;

int solve(int N)
{
    int foodItem = 0;

    while (N != 0)
    {
        if (N % 2 == 0)
        {
            N = N / 2;
            foodItem++;
        }
        else
        {
            N = (N + 1) / 2;
            foodItem++;
            if (N == 1)
                break;
        }
    }

    return foodItem;
}

int main()
{

    int num = 7;
    int ans = solve(num);
    cout << ans;

    return 0;
}
