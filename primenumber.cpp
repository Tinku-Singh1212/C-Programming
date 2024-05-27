#include<stdio.h>
#include<conio.h>
int main()
{
	int num,flag=0;
	printf("enter the number");
	scanf("%d",&num);
	if(num==0||num==1)
	{
		flag=1;
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime number");
	}
	return 0;
}


