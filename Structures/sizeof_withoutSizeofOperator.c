#include<stdio.h>
struct student{
char name[20];
int roll;
float marks;
};
int main(){
struct student s[2];
int size=(int*)&s[1]-(int*)&s[0];
printf("sizeof structure without sizeof %d\n",size);
printf("%lu\n",sizeof(struct student));
}
