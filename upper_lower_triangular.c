#include<stdio.h>
int main(){
        int n,cnt=0;
        printf("enter the size of matrix:\n");
        scanf("%d",&n);
int arr[n][n];
printf("enter the array elements:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
}
}
printf("the lower triangular matrix is:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
        if(i>=j){
        printf("%d ",arr[i][j]);
        }
	else{
	printf("0 ");
	}
}
printf("\n");
}
printf("the upper triangular matrix is:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
        if(i<=j){
        printf("%d ",arr[i][j]);
        }
	 else{
        printf("0 ");
        }
}
printf("\n");
}
return 0;
}
