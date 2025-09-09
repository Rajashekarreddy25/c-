#include <stdio.h>
int main() {
struct student {
int rol;
float marks ;
char name[20];
};/*
int a=10;
struct student s1={65,80.00,"rajashekar"}; 
printf("%d\n",s1.rol);
struct student s4;
printf("enter the details:\n");
scanf("%d %f %s",&s4.rol,&s4.marks,s4.name);
//printf("%d %f %s",s4.rol,s4.marks,s4.name);
*/
int i;
struct student s[i];
printf("enter the details of students:\n");
for (int i=5;i<8;i++){
scanf("%d %f %s",&s[i].rol,&s[i].marks,s[i].name);
}

for (int i=5;i<8;i++){
printf("%d %f %s\n",s[i].rol,s[i].marks,s[i].name);
}
    return 0;
}
