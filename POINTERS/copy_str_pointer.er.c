#include<stdio.h>
#include <string.h>
int main(){
char str1[]="rajashekar";
char str2[]="moulikpate";
int n1=strlen(str1);
int n2=strlen(str2);
char *ptr1,*ptr2;
ptr1=&str1[0];
ptr2=&str2[0];
int temp;
for(int i=0;i<n1;i++){
   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;
   printf("%c",str2[i]);
   ptr1++;
   ptr2++;
}
for(int i=0;i<n1;i++){
printf("%c",str1[i]);
}
return 0;
}
