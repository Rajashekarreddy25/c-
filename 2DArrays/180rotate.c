#include <stdio.h>
int main(){
int n;
printf("enter the size of matrix:");
scanf("%d",&n);
int arr[n][n];
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
		scanf("%d",&arr[i][j]);
	}
}
int array180[n][n];
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
		array180[i][j]=arr[n-1-i][n-1-j];
	}
}
printf("the 180 array is:\n");
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){

               printf("%d",array180[i][j]);
	}
printf("\n");	
}
int array360[n][n];
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){
		array360[i][j]=array180[n-1-i][n-1-j];
	}
}
printf("the 360 array is:\n");
for (int i=0;i<n;i++){
	for (int j=0;j<n;j++){

               printf("%d",array360[i][j]);
	}
printf("\n");	
}
return 0;
}
