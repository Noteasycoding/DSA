#include <bits/stdc++.h>
using namespace std;

int reverse_num(int num)
{
    int digit = 0;
    int ans = 0;
    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    return ans;
}

int main()
{

    int num;
    cout << "Enter the num:";
    cin >> num;
    int ans = reverse_num(num);
    if (ans == num)
    {
        cout << "The number is Palindrom";
    }
    else
    {
        cout << "The number is not Palindrom";
    }

    return 0;
}
