#include <stdio.h>
int main() 
{
	int num,flag=0,temp,div;
	scanf("%d",&num);
	temp=num+1;
	for(div=2;div<num;div++)
	{
		if(temp%div==0)
		{
			temp++;
		}
		flag=1;
	}
	if(flag)
	{
		printf("%d",temp);	
	}
	return 0;
}
