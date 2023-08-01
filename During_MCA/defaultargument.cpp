#include<iostream>
using namespace std;

float moneyRecieved(int currentMoney, float factor=1.04)
{
 return currentMoney*factor;
}
int main()
{
    int money =100000;
    cout<<"If you have"<<money<<"Rs in your bank account, you will receive"<<moneyRecieved(money)<<"Rs in your bank account after one year";
    cout<<"\n For VIP: if you have "<<money<<"Rs in your bank account, you will receive"<<moneyRecieved(money,1.1)<<"Rs in your bank account after one year";
    return 0;
}
