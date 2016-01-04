#include <stdio.h>

int main(void) 
{
    int i,j,value=1;
    printf("%d\n",value);
    for(i=1;i<6;i++)
    {
        printf("%d",value);
        for(j=1;j<=i;j++)
        {
            value=value*(i-j+1)/j;
             printf("%d\t",value);
        }
        printf("\n");
    }
    return 0;
}
