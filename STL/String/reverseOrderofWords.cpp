#include <bits/stdc++.h>
using namespace std;

string reverseWordinString(string str)
{
    stack<string> st;
    int n = str.length();

    string word = "";
    for (int i = 0; i <= n; i++)
    {
        if (str[i] == ' ' || i == n)
        {
            st.push(word);
            word.erase(word.begin(), word.end());
        }
        else
        {
            word += str[i];
        }
    }
    string answer = "";
    while (!st.empty())
    {
        string ansWord = st.top();
        st.pop();
        answer += ansWord + " ";
    }
    return answer;
}

int main()
{

    string str;
    getline(cin, str);

    cout << reverseWordinString(str);

    return 0;
}
