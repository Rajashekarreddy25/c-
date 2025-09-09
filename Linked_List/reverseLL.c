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
printf("The linked list contents are:");
while(temp!=NULL){
printf("%d-> ",temp->data);
temp=temp->next;
}
}

void reverse(){
struct node *prevnode,*nextnode,*currentnode;
prevnode=NULL;
nextnode=currentnode=head;
while(nextnode!=NULL)
{
nextnode=nextnode->next;
currentnode->next=prevnode;
prevnode=currentnode;
currentnode=nextnode;
}
head=prevnode;
}
int main(){
createnode();
display();

reverse();
display();
return 0;
}
