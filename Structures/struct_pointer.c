#include<stdio.h>
struct student {
int roll_no;
char name[20];
float marks;
};
int main(){
struct student s1={23,"rajashekar",98.5};
struct student s2;
struct student *ptr=&s1;
struct student *ptr2=&s2;
printf("enter a the s2 elements:\n");
scanf("%d %s %f",&(*ptr2).roll_no,(*ptr2).name,&(*ptr2).marks);
printf("%d %s %f\n",ptr2->roll_no,ptr2->name,ptr2->marks);
printf("%d\n",ptr->roll_no);
printf("%s\n",(*ptr).name);
return 0;
}
