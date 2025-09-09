#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *fp;
char fileName[20];
printf("enter the file name:");
scanf("%s",fileName);
fp=fopen(fileName,"r");
if(fp==NULL){
printf("There is no file with given filename");
}
else{
printf("There exist the given file");
}
return 0;
}
