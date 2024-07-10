#include<stdio.h>
int main()
{
	int arr[10]={34,54,56,76,32,58,21,35,12,10};
	int sum=0;
	printf("Sum of array element :");
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	printf(" %d",sum);
	return 0;
}
