#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int a=30, b=50;
	printf("number before swapping %d , %d",a,b);
	swap(&a,&b);
	printf("\nnumber after swapping %d , %d",a,b);
	return 0;
}
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}
