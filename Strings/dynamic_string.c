#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *ptr= (char *) calloc(10,sizeof(char));
int i=0;
for(;i<10;i++){
	scanf("%c",ptr+i);
}
ptr=realloc(ptr,sizeof(char)*20);
if (ptr==NULL){
printf("memory reallocation failed.\n");
return 1;
}
for(;i<20;i++){
	scanf("%c",ptr+i);
}
for (int j=0;j<20;j++)
printf("%c",*(ptr+j));

free(ptr);
return 0;
}
