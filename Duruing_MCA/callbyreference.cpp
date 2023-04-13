#include <iostream>
using namespace std;
// void swap_values(int *, int *);

void swap_values(int *x, int *y)
{
    int t = 0;
    cout << "Inside the funtioin Before SwapX=" << *x << " Y=" << *y << endl;
    t = *x;
    *x = *y;
    *y = t;
    cout << "Inside the funtioin After Swap X=" << *x << " Y=" << *y << endl;
}
int main()
{
    int a = 0, b = 0;
    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    cout << "Before Swap A=" << a << " B=" << b << endl;
    swap_values(&a, &b);
    cout << "After Swap A=" << a << " B=" << b << endl;
}
