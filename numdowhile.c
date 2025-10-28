// n natural numbers using do-while
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter any number");
	scanf("%d",&n);
	do
	{
	  printf("%d\n",i);
	  i++;
	}while(i<=n);
    return 0;
}
