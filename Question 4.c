/* Write a program to find the greatest number stored in an array of size 10. Take array
    values from the user.   */

#include<stdio.h>

int main()
{
    int a[10],i,max;


    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    max=a[1];

    for(i=0;i<=9;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    printf("\n %d",max);

    return 0;
}
