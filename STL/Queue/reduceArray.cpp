#include <bits/stdc++.h>
using namespace std;

// ************************Brute Force**************************

// int reduceArray(vector<int> arr, int n)
// {

//     for (int i = 0; i <= n; i++)
//     {
//         if (arr.size() > 1)
//         {

//             sort(arr.begin(), arr.end());

//             int a = arr[n - i - 1];
//             arr.pop_back();
//             int b = arr[n - i - 2];
//             arr.pop_back();
//             int c = a - b;
//             arr.push_back(c);
//         }
//         else
//             break;
//     }

//     return arr[0];
// }

// ****************************Optimized*****************************

int reduceArray(vector<int> arr, int n)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    while (pq.size() > 1)
    {
        int a, b, c;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        c = a - b;
        pq.push(c);
    }

    return pq.top();
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = reduceArray(arr, n);
    cout << result << endl;

    return 0;
}
