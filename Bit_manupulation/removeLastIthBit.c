#include<stdio.h>
int removeIthBit(int n){
return n&(n-1);
}
int main(){
int n;
printf("enter the n value:");
scanf("%d",&n);
int res=removeIthBit(n);
printf("%d",res);
return 0;	
}
