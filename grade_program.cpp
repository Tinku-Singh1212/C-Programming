//WAP to find the grade of student using else if ladder.
#include<stdio.h>
#include<conio.h>
int main()
{
float m1,m2,m3,m4,m5,sum,per;
printf("\n Enter marks of a student in 5 subjects");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=sum/5;
printf("\n Percentage = %f",per);
if(per>=75.0)
printf("\n A Grade");
else if(per>=60.0 && per<75.0)
printf("\n B Grade");
else if(per>=45.0 && per<60.0)
printf("\n C Grade");
else
printf("\n D Grade");
return 0;
}
