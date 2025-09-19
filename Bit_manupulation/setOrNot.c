#include <stdio.h>
#include<stdbool.h>
int setOrNot(int n ,int k){
int mask = (1<<(k-1));
if (mask & n){
printf("true\n");
}
else{
printf("false\n");
}

}
int main(){
int n, k;
printf("enter the n and k values:\n");
scanf("%d %d",&n,&k);
setOrNot(n,k);
return 0;
}
