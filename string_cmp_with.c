//COMPARING TWO STRINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s1[20],s2[20];
	int x;
	printf("enter string 1 name");
	scanf("%s",&s1);
	printf("enter string2 name");
	scanf("%s",&s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("both strings are equal");
	else
	printf("both strings are not equal");
	return 0;
}
