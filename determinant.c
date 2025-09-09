#include<stdio.h>
int main(){
int n;
printf("enter the size of matrix:");
scanf("%d",&n);
int arr[n][n];
printf("enter the matrix:");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
	}
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
printf("%d",arr[i][j]);
	}
	printf("\n");
}
int det=arr[0][0]*((arr[1][1]*arr[2][2])-arr[2][1]*arr[1][2])
	-arr[0][1]*((arr[1][0]*arr[2][2])-arr[2][0]*arr[1][2])
	+arr[0][2]*((arr[1][0]*arr[2][1])-arr[2][0]*arr[1][1]);

	printf("%d",det);
return 0;
}
