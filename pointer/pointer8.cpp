// #include<iostream>
// using namespace std;

// //Pointer with funtion 

// void print(int * p){
//     cout<< *p;
// }

// void update(int *p){
//     // p = p + 1;
//     *p = *p + 1;
// }
 
// int main(){
 
//     int value = 5;
//     int *p = &value;
//     // print(p);
    
//     cout<< "Before P :"<< p << endl;
//     update(p);
//     cout<< *p << endl;
//     cout<< "After P :"<< p << endl;
    

 
// }

#include<iostream>
using namespace std;

// int f(int x, int *py, int **ppz){
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }
 
// int main(){
 
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;

//     cout<<f(c, b, a);

//     return 0;
 
// }

int main(){
    int ***r, **q, *p, i = 8;
    p = &i; // 8
    cout<< p<<endl;
    (*p)++; // i = 9
    q = &p; // 
    cout<< q<<endl;
    (**q)++; // i = 10
    r = &q; // i = 10

    cout<< *p<<" "<< **q << " "<< ***r;
    return 0;
}
