#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *f1, *f2;
char words1[100],words2[100];
f1=fopen("filetext1.txt","r");
f2=fopen("filetext2.txt","r");
if(f1==NULL || f2==NULL){
printf("error in the files");
return 1;
}
while(1){
int read1=fscanf(f1,"%s",words1);
int read2=fscanf(f2,"%s",words2);
if(read1==1){
printf("%s ",words1);
}
if(read2==1){
printf("%s ",words2);
}
if(read1!=1 && read2!=1){
break;
}
}
fclose(f1);
fclose(f2);
return 0;
}
