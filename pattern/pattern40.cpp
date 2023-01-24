#include <bits/stdc++.h>
using namespace std;
void printDiamont(int n)
{
    int row = 1;
    while (row <= n)
    {
        // Spaces
        int space = 1;
        while (space <= n - row)
        {
            cout << " ";
            space += 1;
        }
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
    while (row2 <= n)
    {
        int space2 = 1;
        while (space2 < row2)
        {
            cout << " ";
            space2 += 1;
        }
        int col2 = 1;
        while (col2 <= n - row2 + 1)
        {
            cout << "*"
                 << " ";
            col2 += 1;
        }
        cout << endl;
        row2 += 1;
    }
}

int main()
{

    int n = 0;
    cout << "Enter the number:";
    cin >> n;
    printDiamont(n);

    return 0;
}
