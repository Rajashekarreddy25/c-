#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
};
void insertAtbegin(struct Node** head,int val){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=val;
newNode->next=NULL;
if (*head==NULL){
*head=newNode;
}
else{
newNode->next=*head;
*head=newNode;
}
}
void printLL(struct Node* head){
struct Node  *temp=head;
while(temp){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
}

int main(){
struct Node* head=NULL;
insertAtbegin(&head,1);
insertAtbegin(&head,2);
insertAtbegin(&head,3);
insertAtbegin(&head,4);
printLL(head);
}
