#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int main (){
char str[550]="The quic brown fox jumps over the lazy dog";
int freq[26]={0};
for (int i=0;str[i]!='\0';i++){
if (str[i]!=' '){
char c = tolower(str[i]);
int index = c-'a';
freq[index]=freq[index]+1;
}
}
int flag=true;
for (int i=0;i<26;i++){
if (freq[i]==0)
	flag=false;
}
if (flag==true)
	printf("panagram");
else 
	printf("not a panamgram");

return 0;
}
