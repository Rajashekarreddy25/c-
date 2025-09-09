
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
	int s1,s2;
        if (arr[0]<arr[1]){
	  s1=arr[0];
	  s2=arr[1];
	}
	else {
	s1=arr[1];
	s2=arr[0];
	}
	for (int i=2;i<n;i++){
	if (arr[i]<s1){
	s2=s1;
	s1=arr[i];
	}
	else if(arr[i]<s2){
	s2=arr[i];
	}
	}
	printf("s2 is %d\n",s2);
	printf("s1 is %d\n",s1);
return 0;
}
