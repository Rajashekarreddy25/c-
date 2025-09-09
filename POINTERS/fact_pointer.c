#include<stdio.h>
int main(){
int fact=1,n;
printf("enter a num :");
scanf("%d",&n);
int *ptr;
ptr=&fact;
for(int i=1;i<=n;i++){
	*ptr=*ptr*i;
}
printf("%d\n",*ptr);
return 0;
}
