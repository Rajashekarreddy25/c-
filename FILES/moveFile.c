#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *source ,*destin;
char srce[]="C:/Users/hp/OneDrive/Documents";
char dest[]="C:/Users/hp/OneDrive/Documents/zoom";
char ch;

source = fopen(srce,"rb");
if(source == NULL){
perror("unable to open file:\n");
return 1;
}

destin = fopen(dest,"wb");
if(destin==NULL){
perror("error:in opening file\n");
fclose(source);
return 1;
}

while( (ch=fgetc(source)) != EOF){
fputc(ch,destin);
}
fclose(source);
fclose(destin);

if(remove(srce)==0){
printf("file copied successfully\n");
}
else{
perror("error in coping file\n");
}

return 0;
}
