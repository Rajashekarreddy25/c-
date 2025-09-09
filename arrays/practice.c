#include <stdio.h>
int swap(int arr1[],int arr2[],int *ptr1,int *ptr2,int n){
int temp;
for (int i=0;i<n;i++){
temp=ptr1[i];
ptr1[i]=ptr2[i];
ptr2[i]=temp;
}
}
int main (){
int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10};
int m=5,n=5;
int *ptr1=&arr1[0];
int *ptr2=&arr2[0];
swap(arr1,arr2,ptr1,ptr2,n);
for (int i=0;i<n;i++){
printf("%d ",arr1[i]);
}
for (int i=0;i<m;i++){
printf("%d ",arr2[i]);
}
return 0;
}
