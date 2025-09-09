#include<stdio.h>
int main(){
int n,cnt=0;
printf("enter a num:");
scanf("%d",&n);
int i=1;
while(i<=n){
if(n%i==0){
cnt++;
}
i++;
}
if(cnt==2){
	printf("prime");
}
else{
printf("not Prime");
}
return 0;
}
