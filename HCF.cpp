//WAP to find the GCD(HCF) of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
int divisor,dividend,i,rem;
printf("\nEnter the divisor");
scanf("%d",&divisor);
printf("\nEnter the dividend");
scanf("%d",&dividend);
rem=dividend%divisor;
while(rem!=0)
{
dividend=divisor;
divisor=rem;
rem=dividend%divisor;
}
printf("\n HCF = %d",divisor);
return 0;
}
