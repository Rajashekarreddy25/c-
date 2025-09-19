/*
 Q .1 ) Given a set of numbers where all elements occur an even number of times except one number, find  
     the odd occurring number.
 arr[] = {4,2,2,1,5,6,7,5,6,7,4}.
 */
#include<stdio.h>
int fun(int *arr,int l){
int res=0;
for(int i=0;i<l;i++){
res^=arr[i];
}
return res;
}
int main(){
int  arr[] = {4,2,2,1,5,6,7,5,6,7,4};
int l=sizeof(arr)/sizeof(arr[0]);
int ans=fun(arr,l);
printf("%d",ans);
return 0;
}
