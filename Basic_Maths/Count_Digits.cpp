#include <bits/stdc++.h>
using namespace std;

// First Approach

int digitCount(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

// Second Approach

int digit_count(int num)
{
    string s = to_string(num); // Convert into string
    return s.length();
}

int main()
{

    int num;
    cout << "Enter Num:";
    cin >> num;

    int count = digitCount(num);
    int count2 = digit_count(num);
    cout << count << endl;
    cout << count2 << endl;

    return 0;
}
