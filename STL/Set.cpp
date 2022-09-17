#include<iostream>
#include<set>

using namespace std;
 
int main(){

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(0);
    s.insert(0);


    cout<<s.size()<<endl;
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    s.erase(s.begin());
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"5 Present or not->"<<s.count(5);
    cout<<endl;
    cout<<"-5 Present or not->"<<s.count(-5);

    cout<<endl;
    set<int>::iterator itr = s.find(5);
    cout<<"Iterator->"<<*itr;


 
    
 
}
