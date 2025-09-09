
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str1[100],str2[100];
printf("enter a string1:");
scanf("%s",str1);
printf("enetr the str2:");
scanf("%s",str2);
int len1=strlen(str1);
int len2=strlen(str2);
int freq1[26]={0},freq2[26]={0};
if (len1==len2){
for (int i=0;i<len1;i++){
char ch1=tolower(str1[i]);
if (ch1>=97 && ch1<= 122){
freq1[ch1-'a']++;
}
}
for (int i=0;i<len2;i++){
char ch2=tolower(str2[i]);
if (ch2>=97 && ch2<=122){
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
	printf("is an anagram");
}else{
printf("is not anagram");
}
return 0;
}




/*
#include<stdio.h>
#include<string.h>
int main(){
	char str[]="rajashekar125 is very g143d";
    int len1=strlen(str);
    int sum=0;
    for (int i=0;i<len1;i++){
  	// char  ch1=tolower(str[i]);
	 if (str[i]>='0' && str[i]<='9'){
	 sum+=str[i]-'0';
	 }
    }
printf("%d",sum);

return 0;
}
*/


/*
#include <stdio.h>
int main(){
	char str[]="Rajashekar Reddy Vangala";
	int i=0;
	while(str[i]!='\0'){
	i++;
	}
	for (int j=i;j>=0;j--){
	printf("%c",str[j]);
	}
return 0;
}
*/
