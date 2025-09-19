#include <stdio.h>
int powerOf2(int n){
return !(n&(n-1));
}
int main(){
int n;
printf("enter a num:");
scanf("%d",&n);
if(powerOf2(n)){
printf("is true");
}
else{
printf("is false");
}
return 0;
}
