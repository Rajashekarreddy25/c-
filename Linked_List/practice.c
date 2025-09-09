#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
};
struct node *newnode,*temp,*head=NULL;
       int choice=1;
void createNode(){
       while(choice){
	newnode=(struct node*)malloc(sizeof(struct node));
       printf("enetr athe data to insert;");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if (head==NULL){
       head=temp=newnode;
       }
       else{
       temp->next= newnode;
       temp=newnode;
        }
	printf("enter your choice (0,1)?:");
	scanf("%d",&choice);
       }
} 
void display(){
	temp=head;
	printf("The listed is :");
	while(temp!=NULL){
	printf("%d->",temp->data);
	temp=temp->next;
		}
}
void insertAtBegin(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to insert at begin:");
scanf("%d",&newnode->data);
if (head==NULL){
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
}
void insertAtEnd(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enetr the data to instert at end:");
	scanf("%d",&newnode->data);
	if (head==NULL){
	head=newnode;
	}
	else{
	temp=head;
while(temp!=NULL){
temp=temp->next;
}
temp->next=newnode;
}
}
void insertAtPos(){
newnode=(struct node*)malloc(sizeof(struct node));
int i=1,pos;
printf("neter the pos:");
scanf("%d",&pos);
printf("enter the data to insert at pos:");
scanf("%d",&newnode->data);
if (head == NULL){
	head=newnode;
}else{
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
createNode();
display();
insertAtBegin();
display();
insertAtEnd();
display();
insertAtPos();
display();
}
