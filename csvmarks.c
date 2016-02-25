#include <stdio.h>

struct student{
	int slno;
	char name[20];
	int mark[5];
	int total;
	float cutoff;
	char result;
}stud[15];

void sort(struct student stud[])
{
	struct student temp;
	int i,j;
	for(i=0;i<15;i++)
	{
	        for(j=i+1;j<15;j++)
	        {
			if( stud[i].cutoff < stud[j].cutoff )
			{
				temp = stud[i];
				stud[i] = stud[j];
				stud[j] = temp;
			}
			else if( stud[i].cutoff == stud[j].cutoff  )
			{
				if(stud[i].total < stud[j].total)
				{
					temp = stud[i];
					stud[i] = stud[j];
					stud[j] = temp;
				}
			}
			else if( stud[i].total == stud[j].total   )
			{   
				if(stud[i].mark[3] < stud[j].mark[3])
				{
					temp = stud[i];
					stud[i] = stud[j];
					stud[j] = temp;
				}
			}
		}
	}
}

int main()
{
    int i;
	FILE *fp1 ;
	FILE *fp2 ;
	fp1 =fopen( "marks.csv" , "r" );
	fp2 =fopen( "rank.csv" , "w");
	if (fp1 == NULL) 
	{
		printf("File not found");
		return 0;
	}
	i=0;
	while(!feof(fp1))
	{
		fscanf(fp1,"%d,%[^,],%d,%d,%d,%d,%d", &stud[i].slno, stud[i].name, &stud[i].mark[0],&stud[i].mark[1] , &stud[i].mark[2], &stud[i].mark[3], &stud[i].mark[4]);

		stud[i].total=stud[i].mark[0]+stud[i].mark[1]+stud[i].mark[2]+stud[i].mark[3]+stud[i].mark[4];
	
		stud[i].cutoff=(stud[i].mark[0]/2)+((stud[i].mark[1]+stud[i].mark[2])/4);
	
		if(stud[i].mark[0]>=70  && stud[i].mark[1]>=70   && stud[i].mark[2]>=70  && stud[i].mark[3]>=70  && stud[i].mark[4]>=70 )
		{
			stud[i].result='P';
		}
		else
		{
			stud[i].result='F';
		}
	i++;
	}

	sort(stud);
	
	for(i=0;i<15;i++)
	{
		if(stud[i].result == 'P')
		{
			fprintf(fp2, "%s,%f,%d,%c,%d,%d,%d,%d,%d\n",stud[i].name,stud[i].cutoff,stud[i].total,stud[i].result,stud[i].mark[0],stud[i].mark[1],stud[i].mark[2],stud[i].mark[3],stud[i].mark[4]);
		}
	}
fclose(fp1);
fclose(fp2);
return 0;
}
