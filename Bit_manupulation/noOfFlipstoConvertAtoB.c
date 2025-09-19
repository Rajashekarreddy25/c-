#include<stdio.h>
int minFlips(int a,int b){
int n=a^b;
int cnt=0;
while(n){
n=n&(n-1);
cnt++;
}
return cnt;
}
int main(){
int a,b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
int res=minFlips(a,b);
printf("%d",res);
return 0;
}
