#include <bits/stdc++.h>
using namespace std;

double precision(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double ans = sum / n;
    cout << setprecision(6);
    return ans;
}

int main()
{

    double arr[] = {2.2, 1, 3, 1.9, 2.4, 1.7};
    double ans = precision(arr, 6);
    cout << ans;

    return 0;
}
