#include <stdio.h>
int powerOf8(int n){
return !(n&(n-1))&&n%7==1;
}
int main(){
int n;
printf("enter a num:");
scanf("%d",&n);
if(powerOf8(n)){
printf("is power of 8");
}
else{
printf("is not a power of 8");
}
return 0;
}
