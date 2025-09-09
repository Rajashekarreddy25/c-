#include<stdio.h>
int main(){
	int arr[]={1,4,3,9,6,6,9};
	int *ptr=&arr[0];
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=1;i<n;i++){
	if (arr[i] < *ptr){
	int temp=arr[i];
	arr[i]=*ptr;
	*ptr=temp;
	}
	printf("%d",*ptr);
	ptr++;
	}

return 0;
}
