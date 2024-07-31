// WAP to find the factor of a number
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		printf("%d is a factor of %d\n",i,num);
	}
	return 0;
}
