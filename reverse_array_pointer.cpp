#include<stdio.h>
int main(){
	int a[]={45,65,23,12,56,78,89,43,59,78};
	int *pa=a;
	printf("element in the array before reverse : ");
	for(int i=0;i<10;i++){
		printf("%d ",*(pa+i));
	}
	printf("\nelement in the array after reverse : ");
	for(int i=9;i>-1;i--){
		printf("%d ",*(pa+i));
	}
	return 0;
}
