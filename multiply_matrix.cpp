#include<stdio.h>
int main()
{
	int m1[2][2],m2[2][2],m3[2][2],s;
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
			s=0;
			for(int k=0;k<2;k++)
			{
			   s=s+m1[i][k]*m2[k][j];
			   m3[i][j]=s;
		    }
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
