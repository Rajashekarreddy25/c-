#include<stdio.h>
#include<string.h>
int main(){
char str[100]="rajashekar";
char str1[100];
for (int i=0;str[i]!='\0';i++){

str1[i]=str[i];
}
str1[strlen(str)]='\0';
printf("%s",str1);
return 0;	
}
