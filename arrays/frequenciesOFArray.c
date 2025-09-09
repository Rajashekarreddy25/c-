#include <stdio.h>
int main(){
	int n;
	printf("enter arr size: ");
	scanf("%d ",&n);
	int arr[n],f[n];
	printf("enter arr ele: ");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	f[i]=1;
	}
	for(int i=0;i<n;i++){
		if (f[i]==0)
			continue;
		for(int j=i+1;j<n;j++){
		if (f[j]==0)
			continue;
		if (arr[i]==arr[j]){
		f[i]++;
		f[j]=0;
		}
		}
      	} 
		for(int i=0;i<n;i++){
		if (f[i]!=0)
			printf("frequency of %d is %d",arr[i],f[i]);
		}	
return 0;
}
