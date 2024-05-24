#include<stdio.h>
int main()
{
	int i,a[5]={23,45,67,89,76};
	int b[5];
	int *pa=a;
	int *pb=b;
	printf("element in the array ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",*(pa+i));
	}
	printf("\ncopy one array to another array");
	for(int i=0;i<5;i++)
	{
		*(pb+i)=*(pa+i);
	}
	printf("\nelement in the new array ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",*(pb+i));
	}
	return 0;
}
