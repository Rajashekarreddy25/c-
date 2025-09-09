#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
FILE *sourceFile, *targetFile;
char sourceName[20],targetName[20];
char ch;
int sum=0;
int num=0;
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

//if(ch>='0' && ch<='9'){
//sum+=ch-'0';
//}
if(isdigit(ch)){
num=num*10+(ch-'0');
}else{
sum+=num;
num=0;
}
}
sum+=num;
fprintf(targetFile,"%d",sum);

printf("the sum of integers  are copied %s",targetName);
fclose(sourceFile);
fclose(targetFile);
return 0;
}
