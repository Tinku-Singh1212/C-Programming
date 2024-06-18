// WAP to convert decimal number to octal number
#include<stdio.h>
int main()
{
	int a[100];
	int i,rem,que,num;
	printf("enter the number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%8;
		a[i]=rem;
		que=num/8;
		num=que;
		i++;
	}
	printf("\n Representation in octal form :");
	for(int i=sizeof(a[i]);i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
