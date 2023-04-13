#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    queue<int> Q;

public:
    int insert(int element)
    {
        Q.push(element);
    }

    int getFirst()
    {
        int x = -1;
        if (!Q.empty())
        {
            x = Q.front();
            Q.pop();
        }
        return x;
    }
};

int main()
{
    Queue queue;
    queue.insert(5);
    queue.getFirst();

    return 0;
}
