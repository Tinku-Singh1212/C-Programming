#include<stdio.h>
int main()
{
	//int arr[10]={34,54,56,76,32,58,21,35,12,10};
	int arr[100],n;
	printf("Enter the limit of array : ");
	scanf("%d",&n);
	printf("Enter the element in the array :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Element in the array are : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	int sum=0;
	printf("\nSum of array element :");
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	printf(" %d",sum);
	return 0;
}
