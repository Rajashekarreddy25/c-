 
#include<stdio.h>
int main(){
	int n,temp;
	printf("enter a size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter a array ele:");
	for (int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){
	if (arr[i]>arr[i+1]){
	temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	}
	}
	for(int i=0;i<n;i++){
	printf("%d",arr[i]);
	}
return 0;
}

