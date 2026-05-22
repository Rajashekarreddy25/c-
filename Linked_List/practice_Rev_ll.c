#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data ;
	struct Node *next;
};

struct Node* createNode(int val){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("memory allocation failed");
		return NULL;
	}
	newNode->data = val;
	newNode->next = NULL;

	return newNode;
}
void insert(struct Node **head,int data){
	struct Node *newNode = createNode(data);

	if (*head == NULL){
		*head = newNode;
		return ;
	}
	struct Node *temp = *head;
	while (temp -> next != NULL){
		temp=temp -> next;
		}
	temp->next = newNode;
}
void display(struct Node *head){
	struct Node *temp = head;
	while (temp != NULL){
		printf("%d -> ",temp->data);
		temp = temp -> next;
	}
	printf("NULL\n");
}


void freeList (struct Node *head){
//	struct Node *temp = head;
	while(head != NULL){
	struct Node *temp = head;
		head = head ->next;
		free(temp);
	}
}

struct Node* reverseList(struct Node *head){
	struct Node *prev = NULL;
	struct Node *curr = head;
	struct Node *next = NULL;
	while (curr != NULL){
		next = curr->next ;
		curr->next = prev ;
		prev = curr;
		curr = next;
	}
return prev;
}
int main(){
	struct Node *head = NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);
	display(head);
	head = reverseList(head);
	display(head);
	freeList(head);

return 0;
}
