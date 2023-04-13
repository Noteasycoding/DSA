#include <bits/stdc++.h>
using namespace std;

string smallcharacter(string url)
{
    for (int i = 0; i < url.length(); i++)
    {
        if (url[i] >= 'A' && url[i] <= 'Z')
        {
            url[i] = url[i] + 32;
        }
    }
    return url;
}
string addhyphon(string url)
{
    for (int i = 0; i < url.length(); i++)
    {
        if (url[i] == 32)
        {
            url[i] = '2';
        }
    }
    return url;
}

int main()
{
    string str;
    cout << "Enter url:";
    getline(cin, str);
    string ans = smallcharacter(str);
    cout << "Normal Url:" << ans << endl;
    string ans2 = addhyphon(ans);
    cout << "URl with hyohon:" << ans2;

    return 0;
}
