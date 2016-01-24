#include<stdio.h>
int main()
{
   int num,count;
   scanf("%d",&num);
   while(num>0)
   {
       num=num/2;
       count++;
   }
   printf("%d",count);
}
