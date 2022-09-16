/* Write a program to calculate the sum of all even numbers and sum of all odd
    numbers, which are stored in an array of size 10. Take array values from the user.  */

    #include<stdio.h>

    int main()
    {
      int num[10],i,se=0,so=0;

      for(i=0;i<=9;i++)
      {
          printf("\n Enter a Value->");
          scanf("%d",&num[i]);
      }

      for(i=0;i<=9;i++)
      {
          if(num[i]%2==0)
            se=se+num[i];
          else
            so=so+num[i];
      }

      printf("\n Sum of all even numbers = %d",se);
      printf("\n Sum of all odd numbers = %d",so);

      return 0;
}
