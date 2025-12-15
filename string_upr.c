//lower to upper case characters
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[20];
	printf("enter string name");
	gets(s);
	printf("upper case string=%s",strupr(s));
	return 0;
}
