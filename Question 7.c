/* Write a program to find second largest in an array.Take array values from the user.  */

#include<stdio.h>

int main()
{
  int a[10],i,max,max2;

  for(i=0;i<=9;i++)
  {
      printf("\n Enter a Value->");
      scanf("%d",&a[i]);
  }

  for(i=0;i<=9;i++)
  {
      if(max<a[i])
      {
          max2=max;
          max=a[i];
      }
  }

  printf("\n Second Largest Number = %d",max2);

  return 0;
}
