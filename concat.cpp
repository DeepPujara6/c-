#include<stdio.h>
int strcat(char[],char[],char[]);
int main()
{
	char s1[30],s2[30],s3[60];
	printf("enter two string");
	gets(s1);
	gets(s2);
	strcat(s1,s2,s3);
	printf("after concating the string:");
	gets(s3);
}
int strcat(char s1[],char s2[],char s3[])
{
	int i,j=0;
	for(i=0;s1[i]!='\0';i++,j++)
	{
		s3[j]=s1[i];
	}
	for(i=0;s2[i]!='\0';i++,j++)
	{
		s3[j]=s2[i];
	}
}
