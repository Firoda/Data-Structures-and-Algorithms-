#include<stdio.h>
#include<math.h>
void main()
{
   int num,i;
   int FLAG=1;
   printf("Enter any Positive Number : ");
   scanf("%d",&num);
   for(i=2;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      printf("%d is Prime Number n",num);
   }
   else
   {
      printf("%d is not a Prime Number n",num);
   }
   return;
}
