#include<stdio.h>
#include<stdlib.h>
struct students
{
	int sno;
	char name[25];
	int marks[5];
}*stud;

int main()
{
	int i,j,size=0,max;
	float avg[5]={0};
	char *highest[5];
	char ch,heading[25];


	FILE *fp;
	fp=fopen("file.csv","r");
	
	if (fp == NULL) 
	{
		printf("File not found");
		return 0;
	}
	else
	{
    	do
    	{
    		ch = fgetc(fp);
    		if (ch == '\n') 
    		{
    			size++;
    		}
    	}
    	while (ch != EOF);
    
    	stud = (struct students*) malloc((size)*sizeof(struct students));
    	fseek(fp,0L,SEEK_SET);
    
        for(i=0;i<6;i++)
    	{
    		fscanf(fp,"%[^,],",heading[i]);
    	}
    	fscanf(fp,"%[^\n]",heading[i]);
    
    	for(i=0;i<size;i++)
    	{
    		fscanf(fp, "%d,%[^,],%d,%d,%d,%d,%d",&stud[i].sno,stud[i].name,&stud[i].marks[0],&stud[i].marks[1],&stud[i].marks[2],&stud[i].marks[3],&stud[i].marks[4]);
    	}
    
    	for(i=0;i<5;i++)
    	{
    		for(j=0;j<size;j++)
    		{
    			avg[i]=stud[j].marks[i]+avg[i];
    		}
    		avg[i]=avg[i]/size;
    	}
    
    	for(i=0;i<5;i++)
    	{
    		printf(" %f\n",avg[i]);
    	}
    
    	for(i=0;i<5;i++)
    	{
    		max=0;
    		for(j=0;j<size;j++)
    		{
    			if(max<stud[j].marks[i])
    			{
    				max=stud[j].marks[i];
    				highest[i]=stud[j].name;
    			}
    		}
    	}
    
    	for(i=0;i<5;i++)
    	{
    			printf("%s\n",highest[i]);
    	}
    	fclose(fp);
	}
	return 0;
}
