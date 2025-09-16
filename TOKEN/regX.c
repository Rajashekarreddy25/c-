#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str[]="this is a mdbc is a regular expression";
//char pattern[]=[a-z||A-Z][0-9][a-z||A-Z][a-z||A-Z];
for(int i=0;str[i]!='\0';i++){
//	for(int j=i;str[j]!='\0';j++){
		if (isalpha(str[i]) && isdigit(str[i+1]) && isalpha(str[i+2])  && isalpha(i+3)){
        	 printf("%c is a valid pattern!",str[i]);
		}
		else{
		printf("is not a valid pattern!");
		}
//	}
}

//printf("is valid pattern");

return 0;
}
