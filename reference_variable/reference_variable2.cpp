#include <bits/stdc++.h>
using namespace std;

void update1(int n)
{
    n++;
}

void update2(int &n) // initializing Reference variable
{
    n++;
}

int main()
{

    int num = 5;

    cout << "Before :" << num << endl;
    // update1(num);
    update2(num);
    cout << "after :" << num << endl;

    return 0;
}
