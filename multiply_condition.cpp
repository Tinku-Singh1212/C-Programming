#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,m1[10][10],m2[10][10],m3[10][10],s;
	printf("enter the number of rows of m1 matrix : ");
	scanf("%d",&r1);
	printf("enter the number of columns of m1 matrix : ");
	scanf("%d",&c1);
	printf("enter the number of rows of m2 matrix : ");
	scanf("%d",&r2);
	printf("enter the number of columns of m2 matrix : ");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("matrix is not possible");
		return 0;
	}
	printf("enter the element int the matrix m1\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("matrix m1 is\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("enter the element in matrix m2\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("matrix m2 is \n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("multiply of matrix is \n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			s=0;
			for(int k=0;k<c2;k++)
			{
			   s=s+m1[i][k]*m2[k][j];
			   m3[i][j]=s;
		    }
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
}
