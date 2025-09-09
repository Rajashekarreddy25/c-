#include<stdio.h>
#include<math.h>// gcc binaryToDecimal.c -lm
int main(){
int n,rem;
int res=0;
printf("enter a no:");
scanf("%d",&n);
int i=0;
while(n>0){
rem=n%10;
res+=pow(2,i);
n/=10;
i++;
}
printf("%d",res);
return 0;
}
