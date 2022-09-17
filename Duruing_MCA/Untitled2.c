#include<stdio.h>
#include<conio.h>
int main()
{
    int values[5],i;
    printf("enter 5 integers no:");
    for(int i=0;i<5;++i)
    {
        scanf("%d",&values[i]);
    }
    printf("display integers:");
    for(int i=0;i<5;++i)
    {
        printf("%d\n",values[i]);
    }
    return 0;
}
