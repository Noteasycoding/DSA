#include <bits/stdc++.h>
using namespace std;

/*

* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/

int main()
{

    int n;
    cout << "Enter number:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= row - 1)
        {
            cout << " "
                 << " ";
            space++;
        }
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*"
                 << " ";
            col++;
        }

        int col2 = 1;
        while (col2 <= (n - 1) - row + 1)
        {
            cout << "*"
                 << " ";
            col2++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
