#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter Num:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int num = (n / 2) + 1;
        while (col <= n)
        {

            if ((col > 1 && col < n) && (row > 1 && row < n))
            {

                cout << " "
                     << " ";
                col++;
            }
            else
            {
                cout << num
                     << " ";
                col++;
            }
        }
        cout << endl;
        row++;
    }

    return 0;
}
