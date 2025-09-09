#include<stdio.h>
int main(){
	int arr[]={22,3,35,41,13,12,20};
	int k=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){ 
	if (arr[i]>arr[j]){
	int temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
	}
	}
     // for (int i=0;i<n;i++){
      printf("%d ",arr[k-1]);
      
     // }
return 0;
}
