//wap to print table from 1 to n
#include<stdio.h>
int main()
{
	int limit,res,i;
	printf("Enter the limit : ");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		printf("\n Table of %d \n",i);
		for(int j=1;j<=10;j++)
		{
			res=i*j;
			printf("%d * %d = %d\n",i,j,res);
		}
	}
	return 0;
}

