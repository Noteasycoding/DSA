#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    map<int, string> m;

    m[1] = "Zaheer";
    m[2] = "Jatin";
    m[3] = "Gopal";
    m[3] = "ZAHEER";

    m.insert({5, "Lappu"});
    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    cout << "Finding 5->" << m.count(5) << endl;
    cout << "Finding -5->" << m.count(-5) << endl;

    cout << endl;
    m.erase(5);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}
