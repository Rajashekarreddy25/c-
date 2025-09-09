#include <stdio.h>
#include<stdlib.h>
struct node{
struct node* next;
int data;
};
struct node* head =NULL;

struct node* createNode(int data){
struct node* newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=data;
newNode->next=NULL;
return newNode;
}

void append(int data){
struct node* newNode=createNode( data);
 if (head==NULL ){
 head=newNode;
 return;
 }
 struct node* temp=head;
 while(temp->next != NULL){
 temp=temp->next;
 }
 temp->next=newNode;
}

void rotate (int k){
if(head==NULL || head->next == NULL || k==0)
	return ;
int length=1;
struct node* temp=head;
while(temp->next!=NULL){
temp=temp->next;
length++;
}
temp->next=head;

k=k%length;
struct node* newtail=head;
int stepsToNewTail=length-k;
for(int i=1;i<stepsToNewTail;i++){
newtail=newtail->next;
}
head=newtail->next;
newtail->next =NULL;
}
void display(){
struct node* temp=head;
while (temp!=NULL){
	printf("%d-> ",temp->data);
temp=temp->next;
}
printf("NULL\n");
}
int main(){
append(1);
append(2);
append(3);
append(4);
append(5);
printf("the original ll is:");
display();
rotate(3);
printf("the ll after rotatation:");
display();
return 0;
}





