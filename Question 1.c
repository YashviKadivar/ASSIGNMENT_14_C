/* Write a program to calculate the sum of numbers stored in an array of size 10. Take
    array values from the user. */

#include<stdio.h>

int main()
{
    int i,a[10],sum=0;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }

    printf("\n sum=%d",sum);

    return 0;

}
