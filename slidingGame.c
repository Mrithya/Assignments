#include<stdio.h>

void moveup(int [4][4],int,int);
void movedown(int [4][4],int,int);
void moveleft(int [4][4],int,int);
void moveright(int [4][4],int,int);
void display(int [4][4]);
int swap(int * , int *);

int main()
{
    int  game[4][4]={{2,1,4,3},{6,5,0,7},{9,8,11,10},{13,12,15,14}};
	int  result[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
	char charac;
	int blankrow,blankcol,i,j,flag=0;
	printf("Press U-> Up , D-> Down , L->Left , R->Right\n");
    do
	{
    	int i,j;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
    	    {
    		    if(game[i][j]==0)
    		    {
    	            blankrow=i;
    	            blankcol=j;
    		    }
            }
        }
        printf("Enter the character\n");
    	scanf("%c",&charac);
    	switch(charac)
    	{
    		case 'U':
    			moveup(game,blankrow,blankcol);
    			break;
    		case 'D':
    			movedown(game,blankrow,blankcol);
    			break;
    		case 'L':
    			movedown(game,blankrow,blankcol);
    			break;
    		case 'R':
    			moveright(game,blankrow,blankcol);
    			break;
    		case 'Q':
    			break;
    	}
    }while(charac!='Q');
	return 0;
}

void moveup(int game[4][4],int blankrow, int blankcol)
{
    if(blankrow!=0)
    {
        swap(&game[blankrow][blankcol],&game[blankrow-1][blankcol]);
    }
    display(game);
}

void movedown(int game[4][4],int blankrow, int blankcol)
{
	if(blankrow!=3)
	{
		swap(&game[blankrow][blankcol],&game[blankrow+1][blankcol]);
 	}
	display(game);
}

void moveright(int game[4][4],int blankrow, int blankcol)
{
	if(blankcol!=3)
	{
		swap(&game[blankrow][blankcol],&game[blankrow][blankcol-1]);
 	}
	display(game);
}

void moveleft(int game[4][4],int blankrow, int blankcol)
{
	if(blankcol!=0)
	{
	    swap(&game[blankrow][blankcol],&game[blankrow][blankcol+1]);
	}
 	display(game);
}

void display(int game[4][4])
{
    int i,j;
    for( i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",game[i][j]);
        }
	printf("\n");
    }
}

int swap(int *x,int *y)
{
int temp=0;
temp=*x;
*x=*y;
*y=temp;
return *x,*y;
}
