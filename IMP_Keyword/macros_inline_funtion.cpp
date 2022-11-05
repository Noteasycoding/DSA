#include <bits/stdc++.h>
using namespace std;
// Macros: It replace the value of PI at all the places before compilation
// It cannot change
#define PI 3.14

// Inline Funtion: It raplace funtion call with the body of the funtion
// It reduce funtion overhead
// No Extra memory usage

inline int func(int radius)
{
    return PI * radius * radius;
}

int main()
{
    int radius = 5;
    int area = PI * radius * radius;
    int ans = func(radius);

    cout << "Area of circle is:" << area;
    cout << endl;
    cout << "Area of circle Using inline funtion:" << ans;

    return 0;
}
