#include <stdio.h>
int fact(int n){
if (n==0){
	return 1;
}
return n*fact(n-1);
}
int main(){
int n,result;
printf ("enter a num:");
scanf("%d",&n);
result=fact(n);
printf("%d",result);
}
