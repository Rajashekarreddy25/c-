#include<stdio.h>
int main(){

int A[]={1,2,3,4,5,6};
int *p=&A[0];
int size=sizeof(A)/sizeof(A[0]);
for(int i=0;i<size;i++){
printf("%d ",*p);
p++;
}
return 0;
}
