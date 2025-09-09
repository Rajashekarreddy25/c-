#include<stdio.h>
int main(){
int n;
int b[32];
printf("enter any no:");
scanf("%d",&n);
int i=0;
while(n>0){
b[i++]=n%2;
n/=2;
}
for(int j=i-1;j>=0;j--){
printf("%d",b[j]);
}
return 0;
}
