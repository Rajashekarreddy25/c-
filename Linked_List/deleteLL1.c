#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head=NULL;
struct node createNode(int data){
struct node* newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;
if(head==NULL){
head=newNode;
return ;
}
struct node* temp=head;
while(temp->next!=NULL){
	temp=temp->next;
}
temp->next=newNode;
}

void printList(){
struct node* temp=head;
if(temp==NULL){
printf("list is empty:");
return;
}
while(temp!=NULL){
printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL\n");
}


void deleteAtStart (){
if (head==NULL){
printf("list is empty ");
return ;
}
struct node* temp=head;
head=head->next;
free(temp);
printf("node deleted at starting:");
}

void deleteAtEnd(){
if(head==NULL){
printf("list is empty:");
return;
}
if(head->next==NULL){
free(head);
head=NULL;
printf("node at end is deleted:\n");
return;
}
struct node* temp= head;
while(temp->next->next!=NULL){
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
printf("node deleted at end\n");
}


void deleteAtPos(int pos){
if(head==NULL){
printf("the list is empty:");
return;
}
struct node* temp=head;
if(pos==1){
	head=head->next;
free(temp);
printf("the node deleted at pos:");
return;
}
for(int i=1;temp!=NULL && i<pos-1;i++){
temp=temp->next;
}
  if (temp == NULL || temp->next == NULL) {
        printf("Position %d is not valid\n", pos);
        return;
    }
struct node* nodeToDelete=temp->next;
temp->next=nodeToDelete->next;
free(nodeToDelete);
printf("the node deleted at the position: ");
}
int main(){
createNode(10);
createNode(11);
createNode(12);
createNode(13);
createNode(14);
createNode(15);
printList();
 
deleteAtStart();
printList();

deleteAtEnd();
printList();

deleteAtPos(4);
printList();


return 0;
}

