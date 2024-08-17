//WAP to print n raised to the power m using recursion using recursion
#include<stdio.h>
#include<conio.h>
long power(int,int); //function Declaration
int main()
{
int num,pwr;
long res;
printf("Enter number");
scanf("%d",&num);
printf("\n Enter power");
scanf("%d",&pwr);
res=power(num,pwr); //function call
printf("\n Answer = %ld",res);
return 0;
}
long power(int n,int p)     //function definition
{
if(p==0)
return 1;
else
return (n*power(n,p-1));
}
