#include<stdio.h>
void copystring( char[],char[]);
int main()
{	
		char s1[20],s2[20];
		printf("enter string");
		gets(s1);
		copystring(s1,s2);
		printf("after copying s1 into s2");
		puts(s2);
}
void copystring( char s1[],char s2[])
{
		int k;
		for(k=0;s1[k]!='\0';k++)
		{
				s2[k]=s1[k];
		}
}
