#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
char str1[]="the logic is the logic of the logic";
char str2[]="the";
int count=0;
int len1=strlen(str1);
int len2=strlen(str2);
int end=len1-len2+1;
for (int i=0;i<end;i++){
bool is_found=true;
for(int j=0;j<len2;j++){
if(str2[j]!=str1[i+j]){
is_found=false;
}

}
if (is_found)
	count++;

}
printf("%d",count);
	
	return 0;
}
