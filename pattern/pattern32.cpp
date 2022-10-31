#include <bits/stdc++.h>
using namespace std;

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
            int value = (row - col + 1) & 1;
            cout << value << " ";
            col += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}
