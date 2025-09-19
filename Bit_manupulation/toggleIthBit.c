#include<stdio.h>
int toggle(int n,int k){
int mask=1<<(k-1);
return n^mask;
}
int main (){
int n,k;
printf("enter a num and k value:");
scanf("%d %d",&n,&k);
int res=toggle(n,k);
printf("%d",res);
return 0;
}
