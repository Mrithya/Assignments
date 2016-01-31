#include<stdio.h>
float squareRoot(float,float);
int main()
{
    float num;
    scanf("%f",&num);
    float acc;
    scanf("%f",&acc);
    printf("Square root of %f is %f", num, squareRoot(num,acc));
}

float squareRoot(float n,float acc)
{
    float num = n;
    float y = 1;
    while(num - y > acc)
    {
        num = (num + y)/2;
        y = n/num;
    }
    return num;
}
