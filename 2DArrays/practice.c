#include <stdio.h>
void swap90(int n, int arr[n][n]){
    
	for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
	int temp=arr[i][j];
 arr[i][j]=arr[j][n-i-1];
 arr[j][n-i-1]=temp;
 }
}
}
int main(){
	int n=3;
	int arr[n][n];
	printf("enter the elemnets of arr:");
	for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
	scanf("%d",&arr[i][j]);
	}
	}
	swap90(n,arr);
		for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		printf("%d ",arr[i][j]);
		}
		printf("\n");
		}
return 0;
}
