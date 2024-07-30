// WAP to print check prime or not
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number :");
	scanf("%d",&num);
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("\n The number is not prime");
			return 0;
		}
		printf("\n The number is prime");
	}
	return 0;
}
