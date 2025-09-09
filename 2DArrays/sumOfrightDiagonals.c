
#include <stdio.h>
int main(){
	int n,sum=0;
	printf("enter the matrix size: ");
	scanf("%d ",&n);
	int arr[n][n];
	printf("enter the matrix elements  :");
	for (int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		scanf("%d ",&arr[i][j]);
	}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
	if (i+j==n-1){
		sum+=arr[i][j];
	}
	}
	}
	printf("\n%d\n",sum);
return 0;
}

