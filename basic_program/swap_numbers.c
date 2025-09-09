#include<stdio.h>
int main(){
int a=4;
int b=5;
printf("the numbers before swap:\n");
printf("%d %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("numbers  after swaping:\n");
printf(" %d %d\n",a,b);
        return 0;
}
