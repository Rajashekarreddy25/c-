#include <stdio.h>
int main(){
int n,temp;
printf("enter a array size:");
scanf("%d",&n);
int arr[n][n];
printf("enter the array elements:");
for(int i=0;i<n;i++){
	for (int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
	}
}
int array90[n][n];
for(int i=0;i<n;i++){
	for (int j=0;j<n;j++){
          array90[i][j]=arr[j][n-1-i];
	}
}
printf("the 90  matrix is:\n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	  printf("%d",array90[i][j]);
	}
	printf("\n");
}
int array270[n][n];
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
	array270[i][j]=array90[n-1-i][n-1-j];
	}
}
printf("the 270 matrix is : ");
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
	printf("%d ",array270[i][j]);
	}
	printf("\n");
}
return 0;
}
