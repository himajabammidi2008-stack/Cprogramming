// Simple interest
#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("enter p,r,t values");
	scanf("%f%f%f",&p,&r,&t);
	SI=p*r*t/100;
	printf("SI=%f",SI);
	return 0;
}
