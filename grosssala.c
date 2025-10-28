//gross salary
#include<stdio.h>
int main()
{
	int bs,da,hra,gs;
	printf(" enter basic salary");
	scanf("%d",&bs);
	if(bs<=12000)
	{
		hra=bs*0.20;
		da=bs*0.80;
	}
	else
	{
		hra=bs*0.10;
		da=bs*0.70;
	}
	gs=bs+da+hra;
	printf("gross salary=%d",gs);
	return 0;
}
