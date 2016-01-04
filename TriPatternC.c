#include <stdio.h>

int main(void) 
{
  int i,j,odd=1,even=2;
    for(i=1;i<=4;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",odd);
            odd=odd+2;
        } 
        printf("\n");
        for(j=1;j<=i+1;j++)
  	    {
            printf("%d",even);
            even=even+2;
  	    }
        printf("\n");
    }
    return 0;
}
