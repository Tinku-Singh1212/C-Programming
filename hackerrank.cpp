#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    printf("enter the integer value");
    scanf("%d %d",&a,&b);
    printf("enter the folat number");
    scanf("%f %f",&c,&d);
    printf("sum of integer number is = %d",(a+b));
    printf("difference of integer number is = %d",(a-b));
    printf("sum of float number is = %f",(c+d));
    printf("difference of float number is = %f",(c-d));
    return 0;
}
