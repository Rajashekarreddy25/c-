#include<stdio.h>
#include<string.h>
int main(){
	char str[]="I love C programming";
	char old[]="C";
	char new[]="python";
	char res[100]="";
	char *pos;
	pos=strstr(str,old);


	if(pos!=NULL){
		strncpy(res,str,pos-str);
		res[pos-str]='\0';

		strcat(res,new);

		strcat(res,pos+strlen(old));
		printf("%s",res);
	
		}
	else{

		printf("the string not found");

		}

}
