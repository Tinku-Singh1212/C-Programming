#include<stdio.h>
int main()
{
	int m1[3][3],m2[3][3];
	printf("enter element in the matrix m1\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("the elements in the matrix m1\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("transpose of the matrix m1\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		    m2[i][j]=m1[j][i];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
