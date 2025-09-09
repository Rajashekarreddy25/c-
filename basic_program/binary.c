#include<stdio.h>
int main(){
int n;
printf("enter a number:");
scanf("%d",&n);
int arr[32];
int i=0;
while(n>0){
arr[i++]=n%2;
n/=2;
}
for (int j=i-1;j>=0;j--){
printf("%d",arr[j]);
}

return 0;
}
