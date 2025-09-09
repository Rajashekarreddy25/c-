
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

       int max1,max2;
       if (arr[0]>arr[1]){
	       max1=arr[0];
	       max2=arr[1];
       }
       else {
          max1=arr[1];
	  max2=arr[0];
       }
       for (int i=2;i<n;i++)
       {
       if (arr[i]>max1){
       max2=max1;
       max1=arr[i];
       }
       else if(arr[i]>max2){
       max2=arr[i];
       }
       }
      
	printf("max2 is %d",max2);
	printf("max1 is %d",max1);	
	
return 0; 
}
