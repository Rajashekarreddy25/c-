#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
char str[]="RajashekarReddyVangala";
int freq[26]={0};
for(int i=0;str[i]!='\0';i++){
char ch=tolower(str[i]);
int index = ch-'a';
freq[index]++;
}
int max=0,max_index=0;
for (int i=0;i<26;i++){
if (freq[i]>max){
max=freq[i];
max_index=i;
}
}
printf("%c",max_index+'a');
return 0;
}
