#include<iostream>
#include<queue>
using namespace std;
 
int main(){

    // Max Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(5);
    maxi.push(0);

    int n = maxi.size();

    cout<<"Size->"<<maxi.size()<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(5);
    mini.push(0);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Maxi Empty or Not->"<<maxi.empty()<<endl;
    cout<<"Mini Empty or Not->"<<mini.empty()<<endl;
    
    


        
 
}
