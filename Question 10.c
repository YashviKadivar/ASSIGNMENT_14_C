/* Write a program in C to copy the elements of one array into another array.Take array
    values from the user.   */

#include<stdio.h>

int main()
{
    int a[10],b[10],i;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<=9;i++)
    {
        printf("\n %d",a[i]);
    }

    return 0;


}
