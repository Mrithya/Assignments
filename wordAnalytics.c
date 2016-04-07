#include<stdio.h>
#include<ctype.h>

void countwords(FILE *fp,int* word)
{
char ch;
while((ch=getc(fp))!=EOF)
{
  if(isspace(ch)||ch=='\t'||ch=='\n')
  {
    (*word)++;
  }
}
void lettercount(FILE *fp,int* letter)
{
char ch;
while((ch=getc(fp))!=EOF)
{
	if(isalpha(ch))
	{
		(*letter)++;
	}
}
}

void specialchar(FILE *fp,int* special)
{
char ch;
while((ch=getc(fp))!=EOF)
{
	if(!(isalpha(ch) || isdigit(ch) || isspace(ch)))
	{
		(*special)++;
	}
}
}

void topcommonletter(FILE *fp)
{

char ch;
int letters[26]={0};
char letters_alpha[26],tmp;
int temp,i,j,max;
for(i=0;i<26;i++)
{
  letters_alpha[i]=(char) 'a'+i;
}
while((ch=getc(fp))!=EOF)
{
	if (isalpha(ch))
   {
      ch = tolower(ch);
      letters[ch - 'a']++;
   }
}

for(i=0;i<26;i++)
{
  for(j=i;j<26;j++)
    {
      if(letters[i] < letters[j])
      {
        temp = letters[i];
        letters[i]=letters[j];
        letters[j] = temp;
        tmp = letters_alpha[i];
        letters_alpha[i]=letters_alpha[j];
        letters_alpha[j]=tmp;
      }
    }
}
	for(i=0;i<26;i++)
	{
		if(letters[i]==0)
		{
		  printf("letter not used: %c",letters_alpha[i]);
		}
	}

for(i=0;i<3;i++)
{
  printf("\n %c for %d times \t",letters_alpha[i],letters[i]);
  max=max-1;
}
printf("\n");
}

int main()
{
   FILE *fp;
   char ch;
   int word=0,letter=0;
   int special=0;
   fp=fopen("student.txt","r");
   countwords(fp,&word);
   rewind(fp);
   lettercount(fp,&letter);
   rewind(fp);
   specialchar(fp,&special);
   rewind(fp);
   topcommonletter(fp);
   printf("no of word=%d\n",word);
   printf("no of letters=%d\n",letter);
   printf("no of special charac=%d\n",special);
   return 0;
}
