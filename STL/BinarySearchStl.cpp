#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);

    cout<<"Finding 14->"<<binary_search(v.begin(), v.end(), 14)<<endl;
    cout<<"Finding 5->"<<binary_search(v.begin(), v.end(), 5)<<endl;

    cout<<"Lower bound->"<<lower_bound(v.begin(), v.end(), 4)- v.begin()<<endl;
    cout<<"Upper bound->"<<upper_bound(v.begin(), v.end(), 4)- v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max->"<<max(a, b)<<endl;
    cout<<"Min->"<<min(a, b)<<endl;
    
    swap(a,b);
    cout<<"a->"<<a<<" "<<"b->"<<b<<endl;
    
    string str = "ABCDEF";
    cout<<"String before reverse is->"<<str<<endl;

    reverse(str.begin(), str.end());
    cout<<"String after reverse is->"<<str<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate"<<endl;

    for(int i: v){
        cout<<i;
    }
    cout<<endl;

    cout<<"After Sorting"<<endl;
    sort(v.begin(), v.end());
    for(int i: v){
        cout<<i;
    }
    
 
}
