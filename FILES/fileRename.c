#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *oldFile, *newFile;
char oldName[20],newName[20];
char ch;
printf("enter the oldName ,newName:\n");
scanf("%s %s",oldName,newName);
oldFile=fopen(oldName,"r");
if(oldFile==NULL){
printf("error:file %s not found",oldName);
return 1;
}
newFile=fopen(newName,"w");
if(newFile==NULL){
printf("error:the file %s not found",newName);
fclose(oldFile);
return 1;
}
while((ch=fgetc(oldFile))!=EOF){
fputc(ch,newFile);
}

fclose(oldFile);
fclose(newFile);
if(remove(oldName)==0){
printf("File renamed successfully from '%s' to '%s'\n", oldName, newName);
    } else {
        printf("Error: Could not delete old file '%s'.\n", oldName);
    }
return 0;
}

