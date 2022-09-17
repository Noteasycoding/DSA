#include <stdio.h>
void change(int*,int*);
int main()
{
    int a=10,b=20;
    printf("Value of A:%d\nValue of B: %d",a,b);
    change(&a,&b); // calling a function by passing references of variables.
    printf("\nValue of a is: %d",a);
    printf("\n");
    printf("Value of b is: %d",b);
    return 0;
}
void change(int *x,int *y)
{
    *x=13;
    *y=17;
}
