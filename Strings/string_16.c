#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int cnt_word(char *str1,char *str2){
int count=0;
int len1=strlen(str1);
int len2=strlen(str2);
int end=len1-len2+1;
for(int i=0;i<end;i++){
bool is_found=true;
for(int j=0;j<len2;j++){
if (str2[j]!=str1[i+j]){
is_found=false;
}
}
if(is_found== true){
count++;
}

}
return count;
}
int main(){
char str1[]="The brown the The The thedog";
char str2[]="The";

int res=cnt_word(str1,str2);
printf("%d",res);
return 0;
}
