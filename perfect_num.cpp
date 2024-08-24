//WAP to check whether the entered number is perfect or not.
#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,sum=0;
printf("\n enter a number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(num%i==0)
sum=sum+i;
}
if(num==sum)
printf("\nThe number is perfect");
else
printf("\nThe number is not perfect");
return 0;
}
