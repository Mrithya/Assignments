#include<stdio.h>
void convert(int , int);
int main()
{
    int num,base;
	printf("-- Decimal To Any Base Up to 36 (0-Z) --\n");
	printf("Enter the number ");
	scanf("%d",&num);
	printf("Enter the base ");
	scanf("%d",&base);
	if(num < 0) 
	{
        printf("Cannot convert negative numbers.");
        return 0;
	}    
    if(base==0 || base==1) 
	{
        printf("Cannot have 0 or 1 as a base.");
        return 0;
    } 
	convert(num,base);
	return 0;
}

void convert(int num , int radix)
{
	int rem,i=0,j;
	int conv[5];
	while(num!=0)
	{
		rem= num % radix;
		if(rem<10)
		{
			conv[i] = rem + 48;
		}
		else
		{
			conv[i] = rem + 55;
		}
		i++;
		num= num / radix;
	}
    for(j=i-1;j>=0;j--)
	{
		printf("%c",conv[j]);
	}
}

	
