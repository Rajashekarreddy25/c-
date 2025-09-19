#include <stdio.h>
int powerOf16(int n){
return !(n&(n-1))&&n%15==1;
}
int main(){
int n;
printf("enter a num:");
scanf("%d",&n);
if(powerOf16(n)){
printf("is power of 16");
}
else{
printf("is not a power of 16");
}
return 0;
}
