#include<stdio.h>
#include <string.h>
int main(){
char str[]="rajashekar";
int n=strlen(str);
int vowel=0,cont=0;
char *ptr=&str[0];
for (int i=0;i<n;i++){
if (*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='u'||*ptr=='o'){
vowel++;
}else{
cont++;
}
ptr++;
}
printf("%d %d",vowel,cont);
return 0;
}
