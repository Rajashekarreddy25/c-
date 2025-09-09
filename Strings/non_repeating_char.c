#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str1[100];
printf("enter a string1:");
scanf("%s",str1);
int len1=strlen(str1);
int freq1[26]={0};
for (int i=0;i<len1;i++){
char ch1=tolower(str1[i]);
if (ch1>=97 && ch1<= 122){
freq1[ch1-'a']++;
}
}
for (int i=0;i<26;i++){
if (freq1[i]==1){
printf("%c",i+97);
}

}
return 0;
}
