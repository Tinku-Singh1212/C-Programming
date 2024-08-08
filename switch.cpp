//WAp to print the sum,difference, product and quoitient of two numbers using switch statement
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,res,ch;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("\n1: Addition");
printf("\n2: Subtrcation");
printf("\n3: Multiplication");
printf("\n4: Division");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:res=a+b;
printf("\n Sum = %d",res);
break;
case 2:res=a-b;
printf("\n Difference = %d",res);
break;
case 3:res=a+b;
printf("\n Product = %d",res);
break;
case 4:res=a+b;
printf("\n Quoitient = %d",res);
break;
default: printf("\n Wrong Choice try again");
}
return 0;
}
