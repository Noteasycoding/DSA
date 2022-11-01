#include <bits/stdc++.h>
using namespace std;

int armstrong(int num)
{
    int ans = 0;
    int temp = num;
    int count = 0;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    while (num != 0)
    {
        int digit = num % 10;
        ans += pow(digit, count);
        num /= 10;
    }
    return ans;
}

int main()
{

    int num;
    int ans = 0;
    cout << "Enter the num:";
    cin >> num;
    ans = armstrong(num);

    if (num == ans)
    {
        cout << "The number is Armstrong";
    }
    else
    {
        cout << "The number is not Armstrong";
    }

    return 0;
}
