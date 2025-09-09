#include<stdio.h>
#include<unistd.h>
int main(){
int n=50;
printf("%d\n",getpid());
while(n>0){
printf("hello\n");
fflush(stdout);
sleep(2);
n--;
}
return 0;
}
