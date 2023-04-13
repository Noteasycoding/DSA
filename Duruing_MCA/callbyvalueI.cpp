#include <iostream>
using namespace std;
void swap_values(int x, int y);

main()
{
    int a = 0, b = 0, s = 0;
    cout << "Enter two values:";
    cin >> a >> b;
    cout << "A=" << a << endl
         << "B=" << b << endl;
    swap_values(a, b);
    cout << "A=" << a << endl
         << "B=" << b << endl;
}

void swap_values(int x, int y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    cout << "X=" << x << "Y=" << y;
}
