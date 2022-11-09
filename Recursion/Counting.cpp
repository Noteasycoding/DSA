#include <bits/stdc++.h>
using namespace std;

void printCounting(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Relation
    printCounting(n - 1);

    // Processing
    cout << n << endl;
}

int main()
{

    int num;
    cout << "Enter Num:";
    cin >> num;

    printCounting(num);

    return 0;
}
