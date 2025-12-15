//how to declare,read,access and display index and address of the n array elements
#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf(" enter array size ");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
 	}
 	printf("display array values");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
 	}
	return 0;
}
