#include<stdio.h>
int passingArray(int *arr,int n){
for (int i=0;i<n;i++){
printf("%d",arr[i]+1);

}
}
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
passingArray(arr,n);
return 0;
}
