#include <stdio.h>
int main(){
int a[]={1,2,3,4};
int b[]={5,6,7,8};
int sizeOfA=sizeof(a)/sizeof(a[0]);
int sizeOfB=sizeof(b)/sizeof(b[0]);
if (sizeOfA==sizeOfB){
int *p=a;
int *q=b;
for(int i=0;i<sizeOfA;i++){
int temp=*p;
   *p=*q;
   *q=temp;
   p++;
   q++;
}
for(int i=0;i<sizeOfA;i++){
printf("%d",a[i]);
}


}
return 0;
}
