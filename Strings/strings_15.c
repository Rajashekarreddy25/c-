#include<stdio.h>
#include <string.h>
void replace (char *str){
int len=strlen(str);
for(int i=0;str[i]!='\0';i++){
	if (str[i]>='A' && str[i]<='Z'){
	str[i]+=32;
	}
	else if(str[i]>='a'  && str[i]<='z'){
	str[i]-=32;
		}
}
printf("%s",str);

}
int main(){
char str[]="RajaShekarReddyVangala";
replace (str);
return 0;
}
