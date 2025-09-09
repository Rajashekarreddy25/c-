#include<stdio.h>
#include<string.h>
#include<ctype.h>
int count(char str[],int i){
	if (str[i]=='\0'){
	return 0;
	}
	if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
	    str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
	return 1+count(str,i+1);
	}
	else{
	return count(str,i+1);
	}
}
int main(){
char str[100];
printf("enter a string:");
fgets(str,100,stdin);
int cnt=count(str,0);
printf("%d",cnt);
return 0;
}
