#include<stdio.h>
#include<string.h>
#include <ctype.h>
int clean_str(char *str){
	int i,j=0;
	char temp[strlen(str)+1];
	for (i=0;str[i]!='\0';i++){
	if (isalpha(str[i])){
	  temp[j++]=str[i];
	}
	}
	temp[j]='\0';
	strcpy(str,temp);
	printf("%s\n",str);
}
int main(){
char str[]="RajashekaReddy97@gmail.com";
clean_str(str);
return 0;
}
