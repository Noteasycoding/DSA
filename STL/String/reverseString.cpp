#include <bits/stdc++.h>
using namespace std;

void reverseString(string str, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int getLength(char str[])
{

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{

    string str = "name";
    int n = str.length();

    reverseString(str, n);

    cout << str;
}
