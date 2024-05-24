#include<stdio.h>
int main()
{
	int a=30,b=20,d;
	int *pa=&a;
	int *pb=&b;
	d=(*pa+ *pb);
	printf("sum of two number %d",d);
	return 0;
}
