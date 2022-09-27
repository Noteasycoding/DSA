#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;

    s.push("My");
    s.push("Name");
    s.push("is");
    s.push("Zaheer");

    cout << "Top Element->" << s.top() << endl;

    s.pop();
    cout << "Top Element->" << s.top() << endl;
    cout << "size of stack->" << s.size() << endl;

    cout << "Empty or not->" << s.empty() << endl;

    // for(int i: s){
    //     cout<<i;
    // }
}
