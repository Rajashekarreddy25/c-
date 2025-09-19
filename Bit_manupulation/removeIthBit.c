#include <stdio.h>
int removeIthBit(int n ,int k){

int mask=1<<(k-1);
mask=~mask;
return mask & n;
}
int main(){
int n,k;
printf("enter the n and k values :");
scanf("%d %d",&n, &k);
int res=removeIthBit(n,k);
printf("%d",res);
return 0;
}
