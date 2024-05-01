#include<stdio.h>
int main(){
//	int a=20;
//	int *pa=&a;
//	printf("the value of variable is=%d",a);
//	printf("\nthe value of pointer is=%d",*pa+20);
//	return 0;
    int a[];
    int *pa=a;
    printf("enter the value in the array");
    for(int i=0;i<10;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\nvalue in the array is\n");
	for(int i=0;i<10;i++)
    {
    	printf("%d ",a[i]);
	}
	printf("\nvalue by the pointeris\n");
	for(int i=0;i<10;i++)
    {
    	printf("%d ",*(pa+i));
	}
	return 0;
}
