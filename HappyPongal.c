#include<stdio.h>
#include<dos.h>
int main()
{
    char a[]="HAPPY PONGAL";
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
        sleep(1);
    }
    exit(0);
    return 0;
}
