#include <bits/stdc++.h>
using namespace std;

string isValid(string s)
{
    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack.push(s[i]);
        }
        else if ((stack.top() == '(' && s[i] == ')') || (stack.top() == '{' && s[i] == '}') || (stack.top() == '[' && s[i] == ']'))
        {
            stack.pop();
        }
        else
        {
            return "false";
        }
    }
    if (stack.empty())
        return "true";
    return "false";
}

int main()
{

    string s;
    cout << "Enter Parenthesis:";
    getline(cin, s);
    string result = isValid(s);
    cout << result;

    return 0;
}
