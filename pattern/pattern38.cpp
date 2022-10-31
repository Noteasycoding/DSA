#include <bits/stdc++.h>
using namespace std;

/*

* * * *
*     *
*     *
*     *
* * * *

*/

int main()
{

    int n;
    cout << "Enter Num:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - 1)
        {
            if ((col > 1 && col < n - 1) && (row > 1 && row < n))
            {
                cout << " "
                     << " ";
                col++;
            }
            else
            {
                cout << "*"
                     << " ";
                col++;
            }
        }
        cout << endl;
        row++;
    }

    return 0;
}
