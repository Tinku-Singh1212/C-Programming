#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="tinku";
	char str2[]="SINGH",str3[10];
	if(strcmp(str1,str2)==0){
		printf("equal string\n");
	}
	else{
		printf("not equal string\n");
	}
	printf("\n%d",strlen(str1));
	printf("\n%s",strcat(str1,str2));
	printf("\n%s",strupr(str1));
	printf("\n%s",strlwr(str2));
	printf("\n%s",strcpy(str3,str1));
	printf("\n%s",strrev(str1));
	return 0;
	
}
