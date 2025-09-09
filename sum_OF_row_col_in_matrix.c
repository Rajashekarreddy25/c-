#include<stdio.h>
int main(){
	int n;
	printf("enter the size oof matrix:");
	scanf("%d",&n);
	int arr[n+1][n+1];
	printf ("enter the values:");
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	scanf("%d",&arr[i][j]);
	}
	}
	// row sum
	 for(int i=0;i<n;i++){
	 int row_sum=0;
	 for(int j=0;j<n;j++){
	 row_sum+=arr[i][j];
	 }
	 arr[i][n]=row_sum;
	 }
          // col sum
	 int total_sum=0;
	 for(int i=0;i<n;i++){
         int col_sum=0;
         for(int j=0;j<n;j++){
         col_sum+=arr[j][i];
         }
         arr[n][i]=col_sum;
	 total_sum+=col_sum;
         }

	 arr[n][n]=total_sum;
 printf (" the values after sum:");
        for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
        printf("%d ",arr[i][j]);
        }
	printf("\n");
        }

return 0;
}
