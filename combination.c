#include <stdio.h>
#include<math.h>
int main(void) 
{
    int a[]={1,2,3};
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("%d\n",a[i]);
		for(j=0;j<3;j++)
		{
			if(i<j && i!=j || i>j)
			{
			printf("%d",a[j]);
			}
		}
		printf("\n");
	}
		for(i=0,j=0;j<3;j++)
		{
			printf("%d",a[j]);
		}
		printf("\n");
	return 0;
}
