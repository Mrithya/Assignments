#include<stdio.h>

int main()
{
    int matrix[10][10],i,j,order,temp;
    printf("Enter the order");
    scanf("%d",&order);
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<order;i++)
    {
        for(j=i;j<order;j++)
        {
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
         }
    }
    printf("\n");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
