#include <stdio.h>
int main()
{
	int n,sr,sc;
	printf("enter the size of arr:");
	scanf("%d",&n);
	int arr[n+1][n+1];
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	scanf("%d",&arr[i][j]);
	}
	}
	printf("sum of the rows and cols:\n");
	for(int i=0;i<n;i++){
		sc=0,sr=0;
	for(int j=0;j<n;j++){
	sr+=arr[i][j];
	sc+=arr[j][i];
	}
	printf("sr%d is %d,sl%d is %d\n",i,sr,i,sc);
	}
return 0;
}
