
#include <stdio.h>
int main(){
int arr1[]={1,2,3,4,5};
int *ptr;
ptr=&arr1[0];
printf("value of arr :%d address of arr: %p",*ptr,ptr);
return 0;
}
