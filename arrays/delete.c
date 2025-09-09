
#include<stdio.h>
int main(){
	int n,temp;
	printf("enter a size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter a array ele:");
	for (int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
        int d;
	printf("entre a node t delete: ");
	scanf("%d",&d);
	for (int i=d;i<n;i++)
	{
	arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++){
	printf("%d",arr[i]);
	}
return 0;
}
