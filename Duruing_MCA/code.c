#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[20],n,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the number");
    for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
                temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            printf("the sorted array is\n");
            for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
            }
        getch();
    }
}
}
