#include<stdio.h>
#include<string.h>
char repeatingChar(char *str){

int freq[256]={0};
 for(int i=0;str[i]!='\0';i++){
 	freq[(unsigned char)str[i]]++;
 
 	}
 for(int i=0;str[i]!='\0';i++){
 	if( freq[(unsigned char)str[i]]==1){
		return str[i];
		}
 	}
	return '\0';
}
int main(){

	char str[20]="";
	printf("enter the string :\n");
	scanf("%s",str);

	char result=repeatingChar(str);

	if(result != '\0'){
	printf("the first non repeating char is : %c\n",result);
	
	}
	else{
	printf("there is non such char :\n");
	}


return 0;
}

