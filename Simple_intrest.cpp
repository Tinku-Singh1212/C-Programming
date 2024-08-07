//WAP to calculate Simple Interest.
#include<stdio.h>
#include<conio.h>
int main()
{
double principal=20000.25,rate=2.3,si;
int time=5;
printf("\n Principal amount = %lf",principal);
printf("\n Rate = %lf",rate);
printf("\n Time= %d",time);
si=(principal*rate*time)/100;
printf("\n Simple Interest = %lf",si);
return 0;
}
