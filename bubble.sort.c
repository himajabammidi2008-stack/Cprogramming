//bubble sort
#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf(" enter array size ");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("before swap");
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after swap  ");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);	
	}
	return 0;
	}
