#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void insertAtEnd(struct Node** head,int val){

	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=val;
	newnode->next=NULL;

	if(*head==NULL){

		*head=newnode;
		return;
	}
	else{
		struct Node* temp=*head;
		while(temp->next){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void printLL(struct Node* head){
struct Node* temp=head;
while(temp){
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL\n");
}
void freememory(struct Node** head){
struct Node* temp=NULL;
while(*head){
	temp=*head;
	*head=(*head)->next;
	free(temp);

}
}
int main(){

struct Node* head=NULL;
insertAtEnd(&head,1);
insertAtEnd(&head,2);
insertAtEnd(&head,3);
insertAtEnd(&head,4);
insertAtEnd(&head,5);
printLL(head);
freememory(&head);

return 0;

}
