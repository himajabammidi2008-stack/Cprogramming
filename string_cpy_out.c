// to copy string with out handling
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char s1[20],s2[20];
	printf("enter string1 name");
	gets(s1);
	for(i=0;s1[i]!='\0';i++) 
	{
		s2[i]=s1[i];
	}
	s2[i]='\0'; 
	printf("original string=%s",s1);
	printf("\n copied string=%s",s2);
	return 0;
}
