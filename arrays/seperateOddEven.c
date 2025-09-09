#include<stdio.h>
int main(){
	int arr[]={7,3,5,2,4,5,3,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n;i++){
	if (arr[i]%2==0){
         int j=i+1;
  	while(j<n)
	{
	if (arr[j]%2!=0){
	 arr[i]=arr[i]+arr[j];
	 arr[j]=arr[i]-arr[j];
	 arr[i]=arr[i]-arr[j];
	break;
	}
	else{
	j++;
	}	
	}
	}
	}
	for (int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	return 0;
	}
