#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct link{
	int info;
	struct link*next;
}node;
void create_node(node **start,int data){
	node *nn=(node*)malloc(sizeof(node));
	node *temp;
	nn->info=data;
	if(*start==NULL){
		nn->next=*start;
		*start=temp=nn;
		printf("%d\n",nn->info);
		printf("%d\n",nn->next);
	}
	else{
		temp->next=temp=nn;
		nn->next=NULL;
		printf("%d\n",nn->info);
		printf("%d\n",nn->next);
	}
	printf("temp=%u\n",temp);
	printf("%d\n",&nn);
}
int main(){
	node *start=NULL;
	create_node(&start,45);
	create_node(&start,30);
	return 0;
}
