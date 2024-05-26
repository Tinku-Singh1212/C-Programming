#include<stdio.h>
int day(int);
int main()
{
	int n;
	printf("enter the number to find week day \n");
	scanf("%d",&n);
	day(n);
	return 0;
}
int day(int n)
{
	switch(n)
	{
		case 1:printf("sunday");break;
		case 2:printf("monday");break;
		case 3:printf("tuesday");break;
		case 4:printf("wednesday");break;
		case 5:printf("thursday");break;
		case 6:printf("friday");break;
		case 7:printf("saturday");break;
		default:printf("wrong number enter number 1 to 7");
	}
	return 0;
}
