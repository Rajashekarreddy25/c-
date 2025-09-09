#include <stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int *ptr;
	ptr=&a[0][0];
	int n=sizeof(a)/sizeof(a[0][0]);
	for(int i=0;i<n;i++){
	printf(" %d",*ptr);
	ptr++;
	}
return 0;
}


