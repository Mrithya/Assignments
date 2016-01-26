#include <stdio.h>
void print(int );

unsigned char toggle(int ,int );
unsigned char togexcept(int ,int );
unsigned char set1(int ,int);
unsigned char set0(int ,int);
unsigned char swap(int);
unsigned char rotateright(int);
unsigned char rotateleft(int);
void main() 
{
    int num,index,res;
    scanf("%d",&num);
    scanf("%d",&index);
    printf("\nGiven Number ");
    print(num);
    printf("\t Decimal Equivalent: %d",num);

    printf("\n Bit %d set to 1\t",index);
    res=set1(num,index);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n Bit %d set to 0\t",index);
    res=set0(num,index);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n toggled bit\t");
    res=toggle(num,index);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n except bit %d\t",index);
    res=togexcept(num,index);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n Right rotate");
    res=rotateright(num);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n Left rotate");
    res=rotateleft(num);
    print(res);
    printf("\t Decimal Equivalent: %d",res);

    printf("\n Swappin nibbles");
    res=swap(num);
    print(res);
    printf("\t Decimal Equivalent: %d",res);
}


void print(int num)
{
	int i,n=128;
	for(i=0;i<8;i++)
	{
		if(n>num)
		{
			printf("0");
		}
		else
		{
			printf("1");
			num=num%n;
		}
		n=n/2;
	}

}

unsigned char set1(int num,int index)
{
    num|=1<<index;
    return(num);
}

unsigned char set0(int num,int index)
{
    num = num &(~(1<<index));
    return(num);
}

unsigned char toggle(int num,int index)
{
    num^=(1<<index); 
    return(num);
}

unsigned char togexcept(int num,int index)
{
    num=(~num)^(1<<index);
    return(num);
}

unsigned char rotateright(int num)
{
    num=(num/2)|(num*12);
    return(num);
}
unsigned char rotateleft(int num)
{
    num=(num*2)|(num/4); 
    return(num);
}

unsigned char swap(int num)
{
    num=(num<<4)|(num>>4);
    return(num);
}
