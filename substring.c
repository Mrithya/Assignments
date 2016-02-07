#include <stdio.h>
int count;
void substring(char *,char *,int *);
int main() 
{
	char *s;
	char *res;
	int l;
	scanf("%s",s);
	substring(s,res,&l);
	printf("%s",res);
	printf("%d",count);
	return 0;
}
void substring(char *s,char *res,int *l)
{
	int i,j;
	int flag=0;
    count=1;
    *l=0;
	res[0]=s[0];
	(*l)++;
	for(i=1;s[i]!='\0';i++)
	{
		flag=0;
		for(j=0;j<count;j++)
		{
			if(res[j]==s[i])
			{
                flag=1;
				break;
			}
		}
		if(flag==0)
		{
            res[*l]=s[i];
            (*l)++;
            count++;
		}
	}
	res[(*l)++]='\0';
}

