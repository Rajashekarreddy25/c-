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
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
	if(arr[i][j]==0){
	cnt++;
	}
}
}
int cnt2=n*n;
//printf("%d",cnt);
if (cnt>=cnt2/2){
printf("sparse");
}
else{
printf("not a sparse");
}
return 0;
}
