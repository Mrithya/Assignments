#include<stdio.h>
int main()
{
   int num,temp,count=0;
   scanf("%d",&num);
   temp=num;
   if(temp!=0)
   {
      while(num>0)
      {
         num=num/2;
         count++;
      }
   }
   else
   {
      count=1;
   }
   printf("%d",count);
}
