#include <bits/stdc++.h>
using namespace std;

int operate(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;

    case '-':
        return a - b;

    default:
        return a * b;
    }
}

int postFixExpression(string exp)
{
    stack<int> stack;
    for (char ch : exp)
    {
        if (isdigit(ch))
        {
            stack.push(ch - '0');
        }
        else
        {
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            int c = operate(a, b, ch);
            stack.push(c);
        }
    }

    return stack.top();
}

int main()
{

    string s;
    getline(cin, s);
    int res = postFixExpression(s);
    cout << res << endl;

    return 0;
}
