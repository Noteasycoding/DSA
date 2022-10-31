#include <bits/stdc++.h>
using namespace std;

/*

E
DE
CDE
BCDE
ABCDE

*/

int main()
{
    int n;
    cout << "Enter num:";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
