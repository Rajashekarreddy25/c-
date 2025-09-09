#include<stdio.h>
#include<string.h>
int main(){
char str []= "rajashekar reddy";
int len =strlen(str);
for(int i=0;str[i]!='\0';i++){
for(int j=i+1;str[j]!='\0';j++){
	if( str[j]<str[i]){
	char temp=str[j];
	str[j]=str[i];
	str[i]=temp;
	}
}
}
printf("%s",str);
return 0;
}
