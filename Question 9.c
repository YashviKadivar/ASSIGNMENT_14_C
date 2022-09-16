/* Write a program in C to read n number of values in an array and display it in reverse
    order. Take array values from the user. */

#include<stdio.h>

int main()
{
    int a[10],i,n;

    for(i=0;i<=n-1;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("\n %d",a[i]);
    }

    return 0;

}
