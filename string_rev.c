//reverse of number
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[20];
	printf("enter string name");
	gets(s);
	printf("reverse string=%s",strrev(s));
	return 0;
}
