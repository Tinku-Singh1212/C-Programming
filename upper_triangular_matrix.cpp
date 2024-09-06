#include<stdio.h>
#include<conio.h>
int main()
{
	int n,arr[10][10];
	printf("enter the order of matrix :");
	scanf("%d",&n);
	printf("enter the element in the matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("element in the matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("upper tringular matrix\n");
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
		    {
			    printf("%d ",arr[i][j]);
		    }
		    else
		    {
		    	printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
