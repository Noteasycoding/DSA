#include <bits/stdc++.h>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

int main()
{

    int n;
    cout << "Enter the num:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    int row2 = 1;
    while (row2 <= n - 1)
    {
        int col2 = 1;
        while (col2 <= (n - 1) - row2 + 1)
        {
            cout << "*"
                 << " ";
            col2 += 1;
        }
        cout << endl;
        row2 += 1;
    }

    return 0;
}
