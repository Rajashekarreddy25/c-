#include<stdio.h>
int sum(int n,int arr[n][n]){
int lsum=0;
int rsum=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if (i==j){
lsum+=arr[i][j];
}
else if (i+j==n-1){
rsum+=arr[i][j];
}

}
}
if (n%2!=0){
rsum+=arr[n/2][n/2];
}
printf("%d %d",lsum,rsum);
}
int main(){
int n;
printf("enter the size of matirix:\n");
scanf("%d",&n);
int arr[n][n];
printf("enter the matrix :\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
}
}
printf("enetred matrix is:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){ 
printf("%d",arr[i][j]);
}
printf("\n");
}

sum(n,arr);
return 0;
}
