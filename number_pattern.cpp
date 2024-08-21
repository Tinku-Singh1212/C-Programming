//WAP to display pyramid  54321
//			  4321
//			  321
//			  21
//                        1
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,c=5;
for(i=1;i<=5;i++)
{
for(j=c;j>=1;j--)
printf("%d",j);
printf("\n");
c--;
}
return 0;
}
