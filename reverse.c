#include<stdio.h>
int main() 
{
	int num,r;
	int revnum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		r = num % 10;
		revnum = (revnum * 10)+r ;
		num = num / 10;
	}
	printf("%d",revnum);
    return 0;
}
