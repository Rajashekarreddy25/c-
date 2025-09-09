#include <stdio.h>
int main(){
int arr1[]={1,2,3,4,5};
int *ptr;
ptr=&arr1[0];
for(int i=0;i<5;i++){
printf("value of arr :%d address of arr: %p\n",*(ptr+i),(ptr+i));
}
return 0;

}
