#include <stdio.h>
int rotate(int arr[],int start,int end){
while(start<end){
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}
int main (){
int k,size;
printf("enter the size of arr:\n");
scanf("%d",&size);
int arr[size];
printf("enter the array elements :\n");
for (int i=0;i<size ;i++){
scanf("%d",&arr[i]);
}
printf("enter the number.Of elememts to be rotated:\n");
scanf("%d",&k);
k=k%size;
rotate(arr,0,k-1);
rotate(arr,k,size-1);
rotate(arr,0,size-1);
printf("the elements after rotation:\n");
for (int i=0;i<size;i++){
printf("%d ",arr[i]);
}
return 0;
}
