#include<stdio.h>
int main()
{
	int m1[2][2],m2[2][2],m3[2][2];
	printf("enter the element int the matrix m1\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("matrix m1 is\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("enter the element in matrix m2\n");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("matrix m2 is \n");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("sum of matrix is \n");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		   m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}
