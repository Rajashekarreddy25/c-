#include<stdio.h>
struct student {
int roll_no;
char name[20];
float marks;
};
int main(){
	int size;
	printf("enter the size of the array:\n ");
	scanf("%d",&size);
struct student s[size];
printf("neter the elements of struct:\n ");
for (int i=1;i<size;i++){
scanf("%d %s %f",&s[i].roll_no,s[i].name,&s[i].marks);
}
printf("the elements of struct: \n");
for (int i=1;i<size;i++){
printf("%d %s %f",s[i].roll_no,s[i].name,s[i].marks);
}
