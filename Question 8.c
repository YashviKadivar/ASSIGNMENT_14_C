/* Write a program to find the second smallest number in an array.Take array values
    from the user.  */


#include<stdio.h>

int main()
{
  int a[10],i,min1=a[1],min2=0;

  for(i=0;i<=9;i++)
  {
      printf("\n Enter a Value->");
      scanf("%d",&a[i]);
  }

  for(i=0;i<=9;i++)
  {
      if(a[i]>min1)
      {
          min2=min1;
          min1=a[i];
      }
  }

  printf("\n Second smallest Number = %d",min2);

  return 0;
}

