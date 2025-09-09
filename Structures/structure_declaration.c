/*
#include <stdio.h>
#include<string.h>
struct student{
int roll;
char name[20];
};
int main()
{
struct student s1;
//s1.name[]="rajashekar";
s1.roll=64;
strcpy(s1.name,"rajashekar");
printf("%d %s ",s1.roll,s1.name);
return 0;
}*/
/*
#include<stdio.h>
int main()
{
    struct site
    {
        char name[] = "GeeksQuiz";
        int no_of_pages = 200;
    };
    struct site *ptr;
    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);
    getchar();
    return 0;
}*/
#include<stdio.h>
struct st
{
    int x;
    struct st next;
};

int main()
{
    struct st temp;
    temp.x = 10;
    temp.next = temp;
    printf("%d", temp.next.x);
    return 0;
}
