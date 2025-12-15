//student grading
#include<stdio.h>
int main()
{
	float per;
	printf(" enter student percentage");
	scanf("%f",&per);
	if(per>=90)
	printf("A grade");
	else if(per>=70)
	printf("B grade");
	else if(per>=50)
	printf("C grade");
	else if(per>=40)
	printf("D grade");
	else
	printf("FAIL");
	return 0;
}
