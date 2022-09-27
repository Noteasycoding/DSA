#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 5;
    int &ref = num; // Reference Variable

    ref++; // Increament in reference variable

    cout << num << endl;
    cout << ref << endl;

    return 0;
}
