#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char fileName[100];
printf("enter the filename");
scanf("%s",fileName);
fp=fopen(fileName,"w")
return 0;
}
