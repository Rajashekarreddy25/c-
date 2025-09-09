#include <stdio.h>
int main(){

	int n,rev=0;
printf("enter the number:");
scanf("%d",&n);
int temp=n;
while(temp!=0){
int d=temp%10;
rev=(rev*10)+d;
temp/=10;
}
printf("%d",rev);
return 0;
}
