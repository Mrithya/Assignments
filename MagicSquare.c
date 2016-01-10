#include<stdio.h>
void generate(int);
int main()
{
    int size ;
    printf("enter the odd size");
    scanf("%d",&size);
    generate(size);
    return 0;
}
void generate(int size)
{
    int matrix[50][50],val;
    int i = 0,j = size/2;
    if(size % 2 != 0)
    {
        for (val = 1; val <= size*size; )
        {
            if (i==-1 && j==size) 
            {
                j = size-1;
                i = 1;
            }
            else
            {
                if (j == size)
                    j = 0;
                if (i < 0)
                    i=size-1;
            }
            if (matrix[i][j])
            {
                j = j-1;
                i=i+2;
                continue;
            }
            else
            {
                matrix[i][j] = val++; 
            }
            j++; 
            i--;
        }
        printf("\n");
        for(i=0; i<size; i++)
        {
            for(j=0; j<size; j++)
            {
                printf("%d\t ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\nSum of each row/column/diagonal : %d",  size*(size*size+1)/2);
    }
    else
    {
    	printf("Magic square is not possible");
    }
}
