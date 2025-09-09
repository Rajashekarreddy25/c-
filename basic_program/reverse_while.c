#include<stdio.h>
int  main(){
	int n,rev=0reverse_while.c;
printf("enter a num");
scanf("%d",&n);
while(n>0){
int d=n%10;
 rev=(rev*10)+d;
n/=10;

}
printf("%d",rev);
return 0;
}
