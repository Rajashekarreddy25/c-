#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *sourceFile;
char sourceName[20];
char ch; 
int cnt=0;
printf("enter the file name:");
scanf("%s",sourceName);
sourceFile=fopen(sourceName,"r");
if(sourceFile==NULL){
printf("error: cannot open the file ");
exit(1);
}
while((ch=fgetc(sourceFile))!=EOF){
if(ch==' '){
cnt++;
}
}
printf("%d",cnt);
return 0;
}
