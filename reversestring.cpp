#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse(char[],char[]);
int main()
{
	char str1[15],str2[15];
	printf("enter original string");
    gets(str1);
	str2 [0]= 0;
	reverse(str1,str2);
	printf("reverse string:");
	puts(str2);
}
void reverse(char s1[],char s2[])
{
	int i=0,j=0,temp;
	j=strlen(s1)-1;
	
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s2[j];
		s2[j]=temp;
		i++;
		j--;
	}
		
}
