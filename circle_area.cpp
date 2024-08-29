//WAP to demonstrate #include and macro expanion(#define) directive
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
int radious;
float area;
printf("\n Enter radious of the circle");
scanf("%d",&radious);
area=PI*radious*radious;
printf("\n The area of circle = %f",area);
return 0;
}
