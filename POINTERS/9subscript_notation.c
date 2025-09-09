
#include <stdio.h>
int main(){
int arr1[]={1,2,3,4,5};
int *ptr;
ptr=arr1;
for(int i=0;i<5;i++){
printf("poinrer notation :%d subscript notation: %d\n",*ptr+i,ptr[i]);
}
return 0;
}
