#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *sourceFile, *targetFile;
char sourceName[20],targetName[20];
char ch;
printf("enter the sourceName and targetname");
scanf("%s %s",sourceName,targetName);
sourceFile=fopen(sourceName,"r");
if(sourceFile==NULL){
printf("ERROR:cannot open the source file %s content",sourceName);
exit(1);
}
targetFile=fopen(targetName,"w");
if(targetFile==NULL){
printf("ERROR:cannot open the target file %s content",targetName);
fclose(sourceFile);
exit(1);
}

while((ch=fgetc(sourceFile))!=EOF){
fputc(ch,targetFile);
}
printf("the contents of %s  are copied %s ",sourceName,targetName);

return 0;
}
