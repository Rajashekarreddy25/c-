#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};

//struct Node *head = NULL;
struct Node*  createNode(int val){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("memory allocation failed");
		exit(1);
	}
	newNode->data = val;
	newNode->next = NULL;

	return newNode;
}

void insert(struct Node **head ,int val){
	struct Node *newNode = createNode(val);
	
	if(*head == NULL){
		*head = newNode;
		return ;
	}
	
	struct Node *temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void display(struct Node *head){
	
	struct Node *temp = head;

	printf("Linked list :\n");

	while(temp != NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
void freeList(struct Node *head) {
	struct Node *temp = head;
	while(head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}
}
int main(){
	struct Node *head = NULL;

	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);
	insert(&head,50);

	display(head);
	
	freeList(head);
	return 0;



}


