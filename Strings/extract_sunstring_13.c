#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){

char str[]="rajashekar";
//char substr[100];
int pos,len;
printf("enter the pos and len:");
scanf("%d %d",&pos,&len);
for (int i=pos;i<len;i++){
printf("%c",str[i]);
}
return 0;
}
