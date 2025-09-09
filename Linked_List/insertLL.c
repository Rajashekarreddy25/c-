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
	printf("\ndo you want to continue (0,1)?");
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
void insertAtBegin(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data to insert: ");
	scanf("%d",&newnode->data);
	if (head==NULL){
	head=newnode;
	}
	else{
	newnode->next=head;
	head=newnode;
	}
}
void insertAtEnd(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data to insert: ");
	scanf("%d",&newnode->data);
	if (head==NULL){
	head=newnode;
	}
	else{
        temp=head;
	while(temp->next!=NULL){
	temp=temp->next;
	}
	temp->next=newnode;
	}
}
void insertAtPos(){
	int pos,i=1;
	printf("\nenter the position to insert:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data to insert: ");
	scanf("%d",&newnode->data);
	if (head==NULL){
	head=newnode;
	}
	else{
         temp=head;
	 while(i<pos){
	 temp=temp->next;
	 i++;
	 }
	 newnode->next=temp->next;
	 temp->next=newnode;
	}
	
}

int main(){
createnode();
display();
insertAtBegin();
display();
insertAtEnd();
display();
insertAtPos();
display();
return 0;
}
