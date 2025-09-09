#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool substring(char str1[],char str2[]){
int len1=strlen(str1);
int len2=strlen(str2);
int end=len1-len2+1;
for (int i=0;i<end;i++){
bool found=true;
for (int j=0;j<len2;j++){
if (str2[j]!=str1[i+j]){
found=false;
break;
}
}
if (found==true) return true;
} 

return false;
}
int main(){
	char str1[]="rajashekarreddyvangala";
	char str2[]="reddy";
        if( substring(str1,str2))
		printf("%s is sub string of %s",str2,str1);
	else 
		printf("%s is not a string of %s",str2,str1);
return 0;
}
