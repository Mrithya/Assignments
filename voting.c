
#include<stdio.h>



int main()
{
    int num,i,max;
    
    printf("enter the no. of parties");
    scanf("%d",&num);
    int vote[10]={0};
    char party[num][10];
    for(i=1;i<=num;i++)
    {
        scanf("%s",party[i]);
    }
    for(i=1;i<=num;i++)
    {
        printf("%s",party[i]);
    }
    char ch;
    int j;
    printf("Do u want to vote: (y/n)");
    scanf("%c",&ch);
    scanf("%c",&ch);
    while(ch=='y')
    {
        
               
        for(i=1;i<=num;i++)
        {
            printf("%d %s",i,party[i]);
        }
        printf("Enter the party no");
        scanf("\t%d",&j);
        for(i=1;i<=num;i++)
        {
            if(i==j)
            {
                vote[j]++;
            }
            printf("%d %d %s",vote[i],i,party[i]);
        }
        printf("Do u want to vote: (y/n)");
        scanf("%c",&ch);
         scanf("%c",&ch);
      
    }
    max=1;
    for(i=1;i<=num;i++)
    {
        
            if(vote[max]<vote[i])
            {
                max=i;
            }
                
                
    }
    printf("%d %s",vote[max],party[max]);
    return 0;
}
