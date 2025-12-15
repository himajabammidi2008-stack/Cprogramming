 #include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int l1,l2,i,hi=0;
	printf("enter string 1 name");
	scanf("%s",&s1);
	printf("enter string2 name");
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++)
	l1=i;
	for(i=0;s2[i]!='\0';i++)
	l2=i;
	if(l1==l2)
	{
		for(i=0;s1[i]!='\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				hi=1;
				break;
			}
		}
		if(hi==0)
		printf("both strings are equal");
	}	
	else
	printf("both strings are NOT equal");
	return 0;
}  
	
