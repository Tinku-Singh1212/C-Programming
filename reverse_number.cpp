// WAP to print reverse of n digit number

#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("Enter a number ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse = %d",rev);
	return 0;
}

