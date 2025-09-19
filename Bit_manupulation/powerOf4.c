#include <stdio.h>
int powerOf4(int n){
return !(n&(n-1))&&n%3==1;
}
int main(){
int n;
printf("enter a num:");
scanf("%d",&n);
if(powerOf4(n)){
printf("is power of 4");
}
else{
printf("is not a power of 4");
}
return 0;
}
