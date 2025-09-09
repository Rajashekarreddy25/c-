#include <stdio.h>
int main(){
int m;
printf("enter the size of matrix:\n");
scanf("%d",&m);
int arr[m][m];
printf("enter the array elements:\n");
for (int i=0;i<m;i++){
for (int j=0;j<m;j++){
scanf("%d",&arr[i][j]);
}
}
printf("entered  elements are:\n");
for (int i=0;i<m;i++){
for (int j=0;j<m;j++){
printf("%d  ",arr[i][j]);
}
printf("\n");
}
int top=0;
int bottom=m-1;
int left=0;
int right=m-1;
while(top<=bottom && left <= right){
for (int i=left;i<=right;i++){
printf("%d ",arr[top][i]);
}
top++;
for (int i=top;i<=bottom;i++){
printf("%d ",arr[i][right]);
}
right--;
if (top<=bottom){
for (int i=right;i>=left;i--){
printf("%d ",arr[bottom][i]);
}
bottom--;
}
if (left<=right){
for (int i=bottom;i>=top;i--){
printf("%d ",arr[i][left]);
}
left++;
}
}

return 0;
}
