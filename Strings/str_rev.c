#include<stdio.h>
#include <string.h>
int main(){
char str[100];
printf("enter a string : ");
fgets(str,50,stdin);
/printf("%s",str);
int l=strlen(str);
for (int i=0;i<l/2;i++){
     char temp=str[i];
     str[i]=str[l-1-i];
     str[l-1-i]=temp;
}
printf("after rev :%s",str);
return 0;
}
