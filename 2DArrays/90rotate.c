#include <stdio.h>
int main(){
int n,temp;
printf("enter a array size:");
scanf("%d",&n);
int arr[n][n];
printf("enter the array elements:");
for(int i=0;i<n;i++){
	for (int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
	}
}
int Tarr[n][n];
for(int i=0;i<n;i++){
	for (int j=0;j<n;j++){
          Tarr[j][i]=arr[i][j];
	}
}
printf("the transpose matrix is:\n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	  printf("%d",Tarr[i][j]);
	}
	printf("\n");
} 
int array90[n][n];
printf("the 90 rotated matrix is :\n");
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		temp=Tarr[i][j];
		Tarr[i][j]=array90[i][n-j-1];
		array90[i][n-j-1]=temp;
	}
} 
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("%d",array90[i][j]);
	}
	printf("\n");
}
return 0;
}
