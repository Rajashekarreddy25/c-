#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *sourcefile;
char filename[20];
char buffer[256];
printf("enter the dile name:");
scanf("%s",filename);
sourcefile=fopen(filename,"r");
if(sourcefile==NULL){
printf("error in opening the file");
return 1;
}
printf("\n--------file contents-----\n");
while(fgets(buffer,sizeof(buffer),sourcefile)!=NULL){
fputs(buffer,stdout);
}
fclose(sourcefile);
return 0;
}
