#include <stdio.h>
#include <stdlib.h>
struct node{
int data ;
struct node* next;
};

struct node* createNode(int data ){
struct node* node=(struct node*)malloc (sizeof(struct node));
node->data=data;
node->next=NULL;
return node;
}

void printList(struct node* head){
struct node* temp=head;
while(temp!=NULL){
       printf("%d->",temp->data);
        temp=temp->next;
}
printf("NULL\n");
}


void detectAndRemove(struct node* head){
struct node* slow =head;
struct node* fast =head;
while(slow && fast && fast->next){
slow=slow->next;
fast=fast->next->next;
 
if(slow == fast){
printf("loop detected\n");

slow =head;
while( slow != fast){
slow=slow->next;
fast=fast->next;
}
struct node* lastNode=slow;
while(fast->next!=lastNode){
fast=fast->next;
}
fast->next=NULL;
printf("loop removed\n");
return;
}
}
printf("no loop found\n");
}

int main(){
struct node* head=createNode(1);
head->next=createNode(2);
head->next->next=createNode(3);
head->next->next->next=createNode(4);
head->next->next->next->next=createNode(5);

//creating loop
head->next->next->next->next=head->next->next;
detectAndRemove(head);
printf("after removing loop:");
printList(head);
return 0;
}




