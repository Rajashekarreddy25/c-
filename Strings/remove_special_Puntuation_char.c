#include<stdio.h>
#include<ctype.h>
int main(){
	char str[]="hello world! good morning.";
        char res[50]="";
	int  j=0;
	for(int i=0;str[i]!='\0';){
		if(isalpha(str[i]) || isspace(str[i])){
			res[j++]=str[i++];
		}	
		else{
		i++;
		}
	}
	res[j]='\0';
	printf("%s" ,res);
return 0;
}
