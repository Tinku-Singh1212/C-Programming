//WAP to print the sum of any n numbers
#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,i,num;
printf("How many numbers you want to add?");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter the number ");
scanf("%d",&num);
sum=sum+num;
}
printf("\n Sum = %d",sum);
return 0;
}
