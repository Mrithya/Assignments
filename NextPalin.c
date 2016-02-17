#include <stdio.h>
int main()
{
  int n, t, r = 0, a;
  printf("Enter an integer\n");
  scanf("%d", &n);   
  while (1)
  {
        n++;
        t = n;
        r=0;
        while(t>0)
        {
            a=t%10;
            r=r*10 +a;
            t=t/10;
        }
        if (r == n)
        {
            printf("%d",n);
            break;
        }
  }
  return 0;
}
