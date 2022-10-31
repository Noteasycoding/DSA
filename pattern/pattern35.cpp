#include <bits/stdc++.h>
using namespace std;

/*

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

int main()
{

    int n;
    cout << "Enter the num:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << " ";
            space++;
        }

        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            ch += 1;
            col += 1;
        }

        int col2 = 1;
        while (col2 <= row - 1)
        {
            char ch = 'A' + row - col2 - 1;
            cout << ch;
            col2++;
        }

        cout << endl;
        row += 1;
    }

    return 0;
}
