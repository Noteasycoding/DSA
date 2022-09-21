#include<iostream>
using namespace std;
 
int main(){
 
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr <<" "<< f <<" "<<p<<endl; 

    cout<<sizeof(ptr)<<endl;

    int a[] = {1, 2, 3, 4};
    cout << *(a) << " " << *(a+1)<<endl;

    char s[]= "hello";
    char *ptr6 = s;
    cout << s[0]<< " " <<ptr6[0]<<endl;
 
}
