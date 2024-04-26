#include<stdio.h>
int input_matrix(int  m1[2][2],int m2[2][2]);
int output_matrix(int  m1[2][2],int m2[2][2]);
int multiply_matrix(int  m1[2][2],int m2[2][2]);
int main()
{
	int m1[2][2],m2[2][2];
	input_matrix(m1,m2);
	output_matrix(m1,m2);
	multiply_matrix(m1,m2);
	return 0;
}
int input_matrix(int m1[2][2], int m2[2][2])
{
    printf("enter the element in matrix m1\n");
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		scanf("%d",&m1[i][j]);
		}
	}
	printf("enter the element in matrix m2\n");
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		scanf("%d",&m2[i][j]);
		}
	}
	return 0;
}
int output_matrix(int m1[2][2],int m2[2][2])
{
	printf("element in the matrix m1 \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("element in the matrix m2 \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
int multiply_matrix(int m1[2][2],int m2[2][2])
{
	int m3[2][2],s;
	printf("multiply of matrix m1 and m2 \n");
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
