
#include <stdio.h>
typedef struct student {
int roll ;
char name[20];
float marks;
}student;
int main(){
student s1={23,"rajuuu",98};
printf("%d %s %f",s1.roll,s1.name,s1.marks);
return 0;

}

