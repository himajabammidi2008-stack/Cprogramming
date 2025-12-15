#include<stdio.h>
int main()
{
	int A[10][10],r,c,i,j;
	printf("enter matrix A row and coloumn size");
	scanf("%d%d",&r,&c);
	printf("enter matrix A values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("transpose matrix is  \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf(" %d ",A[j][i]);
		}
		printf("\n");
	}
	return 0;
}
