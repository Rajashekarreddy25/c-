#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head=NULL;
void createnode(){
int choice=1;
while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data to insert: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
                if (head==NULL){
                        head=temp=newnode;
                }
                else{
                        temp->next=newnode;
                        temp=newnode;
                }
        printf("do you want to continue (0,1)?");
        scanf("%d",&choice);
}
}
void display(){
temp=head;
printf("\nThe linked list contents are:");
while(temp!=NULL){
printf("%d-> ",temp->data);
temp=temp->next;
}
}
void deleteAtBegin(){
	if (head == NULL){
	printf("\n The linked list is empty:");
	return;
	}
	temp =head;
	head=head->next;
	free(temp);
	printf("\ndeleted node at begining.\n");
}
void deleteAtEnd(){
	if (head == NULL){
	printf("\n The linked list is empty:");
	return;
	}
	struct node *prev=NULL;
	temp=head;
	if (head->next == NULL){
	free(head);
	head=NULL;
	}
	else{
	while(temp->next!=NULL){
	prev=temp;
	temp=temp->next;
	}
	}
	prev->next=NULL;
	free(temp);
	printf("\nnode deleted at end;");
}

void deleteAtPos(){
struct node *nextnode;
int pos ,i=1;
if (head==NULL){
printf("\nlist is empty.\n");
return ;
}
temp=head;
printf("\nenter the pos to delete:");
scanf("%d",&pos);
if (pos==1){
deleteAtBegin();
return;
}
while(i<pos-1 && temp!=NULL){
temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
printf("node deleted at position %d.\n",pos);
}

int main(){

createnode();
display();

deleteAtBegin();
display();

deleteAtEnd();
display();

deleteAtPos();
display();

return 0;
}
