#include<stdio.h>
int main(){
	int n;
	printf("enter a size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter a array ele:");
	for (int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int mini=arr[0];
	int max=arr[0];
	for (int i=0;i<n;i++){
        if (arr[i]>max){
		max=arr[i];
	}
	if (arr[i]<mini){
		mini=arr[i];
	}
	}
	printf("mini is %d and nax is %d",mini,max);
       return 0;
}
	
