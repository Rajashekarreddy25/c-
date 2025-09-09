#include <stdio.h>
#include<stdlib.h>

char replace(char str[]);
int main(){
FILE *source;
char fileName[20];
char ch;
printf("enter the file name");
scanf("%s",fileName);
source =fopen(fileName,"w");
if(source==NULL){
perror("file can not be opened:");
return 1;
}
int cnt=0;
while((ch=fgetc(source))!=EOF){
if (ch == ch+1){
fputs(replace(ch),stdout);
}

}
fclose(source);
}
return 0;
}
char replace(char str[]){

/*
int main(){
char str[]="bananaaaa";
int cnt=0;
for(int i=0;str[i]!='\0';i++){
	for(int j=i+1;str[j]!='\0';j++){
		if(str[i]==str[i+1]){
	           cnt+=1;
		   str[i+1]=cnt+97;
		}	
	
	}
}
printf("%s",str);
*/
return 0;
}
