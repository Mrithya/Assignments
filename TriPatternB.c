#include <stdio.h>

int main(void) 
{
    int i,j,k=1;
    printf("%d\n",k);
    for(i=1;i<6;i++)
    {
        printf("%d",k);
        for(j=1;j<=i;j++)
        {
            k=k*(i-j+1)/j;
             printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
