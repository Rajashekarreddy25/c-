#include<stdio.h>
int reversee(int arr[],int i,int j){
if (i>j){
return 0 ;
}
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
return reversee(arr,i,j);
}

int main(){
int arr[]={1,2,3,4,5,6};
int l=sizeof(arr)/sizeof(arr[0]);
reversee(arr,0,l-1);
for (int i=0;i<l;i++){
printf("%d ",arr[i]);
}
return 0;
}
