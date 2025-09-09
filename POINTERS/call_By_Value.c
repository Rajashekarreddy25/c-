#include<stdio.h>
int fun(int a,int b);
int main(){
int x=10,y=20;
printf("before call by value:%d %d\n",x,y);
fun(x,y);
printf("after call by value:%d %d\n",x,y);
return 0;
}
int fun(int a,int b){

int x=20,y=10;

printf("in fun  call by value:%d %d\n",x,y);
}
