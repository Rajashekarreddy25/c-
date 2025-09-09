#include<stdio.h>
int main(){
int n;
int freq[10]={0};
printf("enter a num:");
scanf("%d",&n);
while(n>0){
int d=n%10;
freq[d]++;
n/=10;
}
for (int i=0;i<10;i++){
	if(freq[i]>0){
printf("freq of %d is %d\n",i,freq[i]);
}
}
return 0;
}
