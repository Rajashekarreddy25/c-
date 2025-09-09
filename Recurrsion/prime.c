#include<stdio.h>
int prime(int n,int i){
if(i==1)
	return 1;
if (n%i==0)
	return 0;
return prime(n,i-1);
}
int main(){
	int n,p;
	printf("enter the num:");
	scanf("%d",&n);
	p=prime(n,n/2);
	if (prime)
		printf("is aprime:");
	else
		printf("composite number:");

}
