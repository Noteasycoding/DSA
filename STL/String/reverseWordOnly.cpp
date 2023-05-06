#include <bits/stdc++.h>
using namespace std;

class Solution
{
protected:
    string reverseString(string str)
    {
        int start = 0;
        int end = str.length() - 1;

        while (start <= end)
        {
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }

public:
    string reverseWords(string s)
    {
        // string s = reverseString(str);
        if (s.size() == 0)
            return s;
        int start;
        int end = s.length();

        stack<string> st; // For reverse words
        string ans;       // For store words

        for (start = 0; start < end; start++)
        {
            string word;
            if (s[start] == ' ')
                continue;

            while (start < end)
            {
                if (s[start] == ' ')
                    break;
                word += s[start];
                start++;
            }

            st.push(word);
        }

        while (!st.empty())
        {
            ans += st.top();
            st.pop();
            if (!st.empty())
            {
                ans += ' ';
            }
        }
        return ans;
    }
};

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    Solution wordReverse; // Creating an Object of class Solution
    string ans = wordReverse.reverseWords(str);
    cout << ans;

    return 0;
}
