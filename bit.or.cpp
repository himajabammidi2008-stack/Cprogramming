#include<stdio.h>
int main()
{
	int x,y,OR;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	OR=x|y;
	printf("bitwise or=%d",OR);
	return 0;
}
