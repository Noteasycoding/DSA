#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(int N, vector<int> A)
{
    int count = 0;
    vector<int> temp;
    vector<vector<int>> ans;
    for (int i = 0; i < A.size(); i++)
    {
        int least = A[i];
        for (int j = 0; j < A.size(); j++)
        {

            if (A[j] > 0)
            {
                if (least == A[j])
                {
                    A[j] = A[j] % least;
                    temp.push_back(++count);
                }
                else
                {
                    break;
                }
            }
        }
        i = i + count;
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    vector<int> A = {2, 2, 2, 3, 3, 3};
    int N = A.size();
    vector<vector<int>> ans = solve(N, A);
    return 0;
}
