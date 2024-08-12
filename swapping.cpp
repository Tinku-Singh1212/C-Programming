//WAP to swap the values of two variables with the help of third variable
#include<stdio.h>
#include<conio.h>
int main()
{
int a=6,b=3,temp;
printf("\n Before swapping");
printf("\n a = %d, b = %d",a,b);
printf("\n After swapping");
temp=a;
a=b;
b=temp;
printf("\n a = %d, b = %d",a,b);
return 0;
}
