#include <stdio.h>
#include<math.h>
int armstrong(int n){
int sum=0,cnt=0;
int temp=n;
while(temp!=0){
temp/=10;
cnt+=1;
}
temp=n;
while(temp!=0){
int d=temp%10;
sum+=pow(d,cnt);
temp/=10;
}
if (sum==n)
	return 1;
else
	return 0;
}
int main(){
int n;

for(int i=0;i<1000;i++){
if (armstrong(i))
	printf("%d ",i);
}
/*
 else
	printf("not an armstrong");
*/
	return 0;
}
