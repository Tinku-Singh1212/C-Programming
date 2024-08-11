//WAP to calculate the average marks and percentage of a student in 5 subject
#include<stdio.h>
#include<conio.h>
int main()
{
float m1,m2,m3,m4,m5,per,sum;
printf("Enter Marks in Hindi");
scanf("%f",&m1);
printf("Enter Marks in English");
scanf("%f",&m2);
printf("Enter Marks in Mathematics");
scanf("%f",&m3);
printf("Enter Marks in Science");
scanf("%f",&m4);
printf("Enter Marks in History");
scanf("%f",&m5);
sum=(m1+m2+m3+m4+m5);
per=(sum*100)/500;
printf("\n Percentage of Student = %f",per);
return 0;
}
