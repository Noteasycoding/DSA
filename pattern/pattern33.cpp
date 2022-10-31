#include <bits/stdc++.h>
using namespace std;

/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

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
            cout << col << " ";
            col += 1;
        }

        int space = 1;
        while (space <= (n - row) * 2)
        {
            cout << " "
                 << " ";
            space += 1;
        }

        int col2 = 1;
        while (col2 <= row)
        {
            cout << row - col2 + 1 << " ";
            col2 += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}
