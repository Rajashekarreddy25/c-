#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main(){
FILE *fp;
char openfile[20];
printf("enter a file name:");
scanf("%s",openfile);
fp=fopen(openfile,"r");
if(fp==NULL){
//perror("error in opening file");
printf("error opening in file %\n",strerror(errno))
	return 1;
}
printf("file %s opened successfully",openfile);
fclose(fp);
return 0;
}
