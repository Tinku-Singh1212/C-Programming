#include<stdio.h>
int sum(int,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int main()
{
	int n1,n2;
	printf("Enter the number A=> ");
	scanf("%d",&n1);
	printf("\nEnter the number B=> ");
	scanf("%d",&n2);
	sum(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
	div(n1,n2);
	return 0;
}
int sum(int n1,int n2)
{
	int n3;
	n3=n1+n2;
	printf("\nSum of two numbers A + B is => %d",n3);
	return 0;
}
int sub(int n1,int n2)
{
	int n3;
	n3=n1-n2;
	printf("\nSubtraction of two number A - B is => %d",n3);
	return 0;
}
int mul(int n1,int n2)
{
	int n3;
	n3=n1*n2;
	printf("\nMultiply of ywo number A * B is => %d",n3);
	return 0;
}
int div(int n1,int n2)
{
	int n3;
	n3=n1/n2;
	printf("\nDivision of two number A / B is => %d",n3);
	return 0;
}
