#include<stdio.h>
#include <string.h>
int main(){
char str [5][100];
int max_len=0;
for(int i = 0;i<5;i++){
printf ("enter the each string :");
scanf("%s",str[i]);
int len =strlen(str[i]);
if (len>max_len){
max_len=len;
}
}
printf("%d",max_len);
return 0;
}
