#include<stdio.h>
int main()
{
	int i,j,count,num;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=num+1;;i++)
	{
		for(j=2;j<=i;j++)
		{
			count=0;
            if(i%j == 0)
            {
            	count++;
            }      
		} 
		if(count==1)
		{
			printf("%d",i);
			break;            
		}
	}
}
