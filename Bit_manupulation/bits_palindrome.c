#include<stdio.h>
int main(){
int n,rev=0;
printf("enter a num");
scanf("%d",&n);
int num2=n;
while(num2>0){
//rev<<=1;
rev|=(num2&1);
rev<<=1;
num2>>=1;
}
if(rev==n){
printf("true");
}
else{
printf("false");
}
return 0;
}
