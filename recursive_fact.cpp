#include<stdio.h>
int factorial(int);
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	printf("factorial of number=> %d",factorial(a));
	return 0;
}
int factorial(int a)
{
	if(a<=1)
	return 1;
	else
	return a*factorial(a-1);
}
