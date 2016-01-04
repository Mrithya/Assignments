#include <stdio.h>
int main(void) 
{
    int i,j,value=1;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
         printf("%d\t",value);
         value++;
    	}
        printf("\n");
    }
    return 0;
}
