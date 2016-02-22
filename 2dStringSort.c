#include<stdio.h>
int main()
{
    int i,j,sum=0,k,temp1;
    int d[7];
    char *c[7]= {"1", "3", "11", "100", "19", "2", "5"};
    char *temp;
    for(i=0;i<7;i++)
    {
        sum=0;
        for(j=0;c[i][j]!=0;j++)
        {
            sum=sum+c[i][j];
        }
        d[i]=sum;
        // printf("%d\t",d[i]);
    }
    for (i = 0; i < 7; i++)
    {
        for (j = i +1; j < 7; ++j)
        {
            if (d[i] > d[j]) 
            {
                temp1=d[i];
                d[i]=d[j];
                d[j]=temp1;
                
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    } 
    for(i=0;i<7;i++)
    {
        printf("%s  ",c[i]);
    }
    return 0;
}
