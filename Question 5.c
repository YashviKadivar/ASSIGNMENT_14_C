/* Write a program to find the smallest number stored in an array of size 10. Take array
    values from the user.   */

#include<stdio.h>

int main()
{
    int a[10],i,min;


    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    min=a[1];

    for(i=0;i<=9;i++)
    {
        if(min>a[i])
            min=a[i];
    }

    printf("\n %d",min);

    return 0;
}

