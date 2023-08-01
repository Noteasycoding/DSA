#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    cout << "Enter three Numbers: ";
    cin >> a >> b >> c;

    int hypotenuse;
    if (a >= b && a >= c)
        hypotenuse = a;
    else if (b >= a && b >= c)
        hypotenuse = b;
    else
        hypotenuse = c;

    // Check if the numbers form a right-angled triangle
    if (hypotenuse * hypotenuse == a * a + b * b || hypotenuse * hypotenuse == a * a + c * c || hypotenuse * hypotenuse == b * b + c * c)
        cout << "Right Triangle" << endl;
    else
        cout << "Not a Right Triangle" << endl;
    return 0;
}