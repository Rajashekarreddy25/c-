#include <stdio.h>
int main(){

	int n,sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if (n%i==0){
		sum+=i;
		}
	}
printf("%d",sum);
return 0;
}
