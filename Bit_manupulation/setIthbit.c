#include<stdio.h>
int setIthBit(int n, int k){
int mask=1<<(k-1);
return n|mask;
}
int main(){
int n,i;
printf("enter the n and i values:");
scanf("%d %d",&n,&i);
int res=setIthBit(n,i);
printf("%d",res);
return 0;
}
