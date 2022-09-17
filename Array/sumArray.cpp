#include<iostream>
using namespace std;

int arraySum(int arr[], int size){

      int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;

}
 
int main(){
 
    int arrsample[5] = {2, 3, 5, 6, 8};

    cout<<"The sum is: "<<arraySum(arrsample, 5);

  
 
}
