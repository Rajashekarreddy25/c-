#include <stdio.h>
#include <string.h>
#include<ctype.h>
int isVowel(char ch) {
    ch = tolower((unsigned char)ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main(){
char str[]="rajashekar reddi";
int n=strlen(str);
int  start=0;
int  end=n-1;
 while(start<end){
while(start < end && !isVowel(str[start])){
start++;
}
while(start < end && !isVowel(str[end])){
end++;
}
if(start<end){
char temp=str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
}
printf("%s",str);
return 0;
}
