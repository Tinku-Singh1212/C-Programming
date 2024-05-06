#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void listtraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
    printf("Element in list : %d\n",ptr->data);
	ptr=ptr->next;
    }  
}

int main()
{
	// creating node in the linked list
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *five;
	struct Node *six;
	struct Node *seven;
	struct Node *eight;
	struct Node *nine;
	struct Node *ten;
	//creating the memory of node in linked list in heap of memory
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	five=(struct Node *)malloc(sizeof(struct Node));
	six=(struct Node *)malloc(sizeof(struct Node));
	seven=(struct Node *)malloc(sizeof(struct Node));
	eight=(struct Node *)malloc(sizeof(struct Node));
	nine=(struct Node *)malloc(sizeof(struct Node));
	ten=(struct Node *)malloc(sizeof(struct Node));

	//connecting the node to first to second and so on
	head->data=7;
	head->next=second;
	
	second->data=11;
	second->next=third;
	 
	third->data=18;
	third->next=fourth;
	
	fourth->data=66;
	fourth->next=five;
	
	five->data=959;
	five->next=six;
	
	six->data=61;
	six->next=seven;
	
	seven->data=554;
	seven->next=eight;
	
	eight->data=6562;
	eight->next=nine;
	
	nine->data=654;
	nine->next=ten;
	
	ten->data=626;
	ten->next=NULL;
	
	listtraversal(head);
	return 0;
}
