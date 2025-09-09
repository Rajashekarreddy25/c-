#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int sum=0;
	int *ptr;
	ptr=&arr[0];
       for(int i =0;i<5;i++){
       sum+=*ptr;
       ptr++;
       }	
       printf("%d ",sum);
       return 0;
}
