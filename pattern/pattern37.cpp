#include <bits/stdc++.h>
using namespace std;

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

int main()
{
    int n;
    cout << "Enter num:";
    cin >> n;

    int row2 = 1;
    while (row2 <= n - 1)
    {
        int col = 1;
        while (col <= row2)
        {
            cout << "*";
            col++;
        }

        int space = 1;
        while (space <= (n - row2) * 2)
        {
            cout << " ";
            space++;
        }

        int col2 = 1;
        while (col2 <= row2)
        {
            cout << "*";
            col2++;
        }

        cout << endl;
        row2++;
    }

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*";
            col++;
        }

        int space = 1;
        while (space <= (row - 1) * 2)
        {
            cout << " ";
            space++;
        }

        int col2 = 1;
        while (col2 <= n - row + 1)
        {
            cout << "*";
            col2++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
