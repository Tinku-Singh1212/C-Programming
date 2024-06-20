#include<stdio.h>
int main()
{
	int a[]={34,45,65,76,67,89};
	int *pa=a;
	printf("element in the array :");
	for(int i=0;i<6;i++)
	{
		printf("%d ",pa[i]);
	}
	printf("\nelement 76 is search in the array\n");
	for(int i=0;i<6;i++)
	{
		if(*(pa+i)==76)
		{
			printf("element is %d",*(pa+i));
			break;
		}
	}
	return 0;
}
