#include <bits/stdc++.h>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

void increament(int **p)
{
    ++(**p);
}

int main()
{

    // Example - 1
    /*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
    */

    // Example - 2
    /*
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;
    */

    // Example - 3
    /*
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    */

    // Example - 4
    /*
    int *p = 0;
    int first = 110;
    *p = first; // it will show an error
    cout << *p << endl;
    */

    // Example - 5
    /*
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;
    */

    // Example - 6
    /*
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
    */

    // Example - 7
    /*
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    */

    // Example - 8
    /*
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr + 1) << endl;
    */

    // Example - 9
    /*
    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;
    */

    // Example - 10
    /*
    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;
    */

    // Example - 11
    /*
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;
    */

    // Example - 12
    /*
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);
    */

    // Example - 13
    /*
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++; // you cannot update value in symbol table
    cout << *ptr << endl;
    */

    // Example - 14
    /*
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;
    */

    // Example - 15
    /*
    char arr[] = "abcde";
    char *p = &arr[0];

    // Example - 16
    cout << &arr[1] << endl;
    cout << p << endl;
    cout << *p << endl;
    */

    // Example - 17
    /*
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;
    */

    // Example - 18
    /*
    char str[] = "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;
    */

    // Example - 19
    /*
    int i = 10;
    update(&i);
    cout << i << endl;
    */

    // Example - 20
    /*
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;
    */

    // Example - 21
    /*
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;
    */

    // Example - 22

    int num = 110;
    int *ptr = &num;
    increament(&ptr);
    cout << num << endl;

    return 0;
}
