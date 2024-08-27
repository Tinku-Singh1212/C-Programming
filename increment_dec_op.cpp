//WAP to demonstrate the concept of increment(++) and decrement(--) operators both prefix and postfix
#include<stdio.h>
#include<conio.h>
int main()
{
int a=5,b=9,res;
printf(" Increment and Decrement Operators(Postfix and Prefix)");
printf("\n a=%d b=%d",a,b);
res=a++;
printf("\n After post Increment");
printf("\n value of a = %d, value of res = %d",a,res);
res=++a;
printf("\n After Pre Increment");
printf("\n value of a = %d, value of res = %d",a,res);
res=--b;
printf("\n After Pre decrement");
printf("\n value of b = %d, value of res = %d",b,res);
res=b--;
printf("\n After Post decrement");
printf("\n value of b = %d, value of res = %d",b,res);
return 0;
}
