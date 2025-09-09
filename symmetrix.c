#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
int arr[n][n];
printf("enter the array  ele:");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
	scanf("%d",&arr[i][j]);

}
}
int symetrix=1;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if (arr[i][j]!=arr[j][i]){
	symetrix=0;
}
}
}
if (symetrix==1){
	printf("symetrix");
}
else{
	printf("not a symetix matrix");
}
return 0;
}
