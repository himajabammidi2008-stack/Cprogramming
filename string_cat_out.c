 // to merge one string to other without handling
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int l,i;
	char s1[20],s2[20];
	printf("enter string1 name");
	gets (s1);
	printf("enter string2 name");
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	l=i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[l++]=s2[i];
	}
	s1[l]='\0';
	printf("merge string is  %s",s1);
	return 0;
}
