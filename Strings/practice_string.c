#include<stdio.h>
#include<ctype.h>
int main(){
	char str[]="The quick  brown fox jumps over the lazy dog";
	int freq[26]={0};
	for(int i=0;str[i]!='\0';i++){
	if (str[i]!=' '){
	char c=tolower(str[i]);
        int index = c-'a';
	freq[index]=freq[index]+1;
	}
	}
	int  flag=1;
	for (int i=0;i<26;i++){
	if (freq[i]==0){
	flag=0;
	}
	}
	if (flag==1)
		printf("panagram");
	else 
		printf("not a panagram");
return 0;
}
