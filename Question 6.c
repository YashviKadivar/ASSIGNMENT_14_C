/* Write a program to sort elements of an array of size 10. Take array values from the
    user.   */

#include<stdio.h>

int main()
{
    int a[10],i,j,temp;

    for(i=0;i<=9;i++)
    {
        printf("\n Enter a Value->");
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
       for(j=i+1;j<=9;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }

   for(i=0;i<=9;i++)
    {
       printf("\n %d",a[i]);
    }
    return 0;
}
