#include<stdio.h>
int main()
{
	int num,m,n,k,i,j;
	char *units[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char *tens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen","Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	char *hundreds[] = {"Twenty", "Thirty", "Forty", "Fifty","Sixty", "Seventy", "Eighty", "Ninety"};
	
	scanf("%d",&num);

	k=num/100;
	if(num>99 && num<999)
	printf(" %s hundred and  ",units[k]);
	
	m=num%100;
	i=m/10;
	j=m%10;
	if(m>9 && m<20)
	{
		if(i==1)
		{
			printf("%s",tens[j]);
			return 0;
		}
	}
	else
	{
		printf("%s\t",hundreds[i-2]);
	}
	n=num%10;
	printf("%s",units[n]);
	return 0;
}
