#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
char str1[100],str2[100];
printf("enter  the 1st strings:");
scanf("%s",str1);
printf("enter the 2nd string:");
scanf("%s",str2);
char freq1[26]={0}, freq2[26]={0};
int len1=strlen(str1);
int len2=strlen(str2);
if (len1==len2){
for(int i=0;i<len1;i++){
	char ch1=tolower(str1[i]);
if(str1[i] >= 97 && str1[i]<=122){
freq1[ch1-'a']++;
}
}
for(int i=0;i<len2;i++){
	char ch2=tolower(str2[i]);
if(str2[i] >= 97 && str2[i]<=122){
freq2[ch2-'a']++;
}
}
int flag=1;
for (int i=0;i<26;i++){
if (freq1[i]!=freq2[i]){
	flag=0;
	break;
}
}
if (flag==1)
printf("is a anagram");
}
else
printf("not a anagram");
return 0;
}
