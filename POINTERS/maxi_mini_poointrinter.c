#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int *mini=&arr[0];
int *max=&arr[0];
for (int i=0;i<5;i++){
if (arr[i]<*mini){
mini=&arr[i];
}
if (arr[i]>*max){
max=&arr[i];
}
}
printf("%d %d\n",*mini,*max);
return 0;
}
