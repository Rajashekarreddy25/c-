
#include<stdio.h>
int fun(int *a,int *b);
int main(){
int x=10,y=20;
printf("before call by reference:%d %d\n",x,y);
fun(&x,&y);
printf("after call by reference:%d %d\n",x,y);
return 0;
}
int fun(int *a,int *b){

 *a=20;
 *b=10;

printf("in fun  call by referenc:%d %d\n",*a,*b);
}
