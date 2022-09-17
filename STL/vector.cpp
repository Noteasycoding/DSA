#include<iostream>
#include<vector>
using namespace std;
 
int main(){

    vector<int> a(5,1);
    cout<<"Print a->"<<endl;    
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int> last(a);
    cout<<"Print last->"<<endl;    
    for(int i:last){
        cout<<i<<" ";
    }

    cout<<endl;
    vector<int> v;
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
 
    v.shrink_to_fit();
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Element at 2nd Index->"<<v.at(2)<<endl;
    cout<<"Size of the vector->"<<v.size()<<endl;

    cout<<"Front->"<<v.front()<<endl;
    cout<<"Back->"<<v.back()<<endl;

    v.pop_back();

    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before clear->"<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear->"<<v.size()<<endl;
    cout<<"Capacity after clear"<<v.capacity()<<endl;
    
    
   
    
}
