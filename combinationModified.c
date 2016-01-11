#include <stdio.h>
int main()
{
	int size,lim,i,j;
	int first,end,a[50],n;
	printf("Enter the size ");
	scanf("%d",&size);
	printf("Enter the elements:");
	for(n=0;n<size;n++)
	{
		scanf("%d",&a[n]);
	}
	for(lim=1;lim<=size;lim++)
	{
		for(first=0;first<=size-lim;first++)
		{
			if(lim==1)
			{
			printf("%d\n",a[first]);
			}
			else
			{
				end=first+lim-1;
				for(j=end;j<size;j++)
				{
					for(i=first;i<end;i++)
					{
					printf("%d",a[i]);
					}
				printf("%d\n",a[j]);
				}
			}
		}	
	}
return 0;
}
