// WAP to check a number is palindrome or not
#include<stdio.h>
int main()
{
	int num,rev=0,n,rem;
	printf("Enter the number : ");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(n==rev)
	{
		printf("\n The number is palindrome");
	}
	else
	{
		printf("\n The number is not palindrome");
	}
	return 0;
}
