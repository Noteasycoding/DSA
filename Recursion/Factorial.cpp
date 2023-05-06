#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // if we do not write base it will accur segmantation fault because of stack overflow
    if (n == 1)   // Base Case
        return 1; // return mandatory

    return n * factorial(n - 1); // Recursive Relation
}

int main()
{

    int num = 5;
    cout << "Enter Num:";
    cin >> num;

    int ans = factorial(num);
    cout << "The factorial of " << num << " is:" << ans;

    return 0;
}
