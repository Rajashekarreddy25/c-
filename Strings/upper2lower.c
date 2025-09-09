
#include <stdio.h>
#include<string.h>
int main(){
char str[100];
printf("enter a string : ");
fgets(str,100,stdin);
int n=strlen(str);
for (int i=0;i<n;i++){
	if(str[i]>=65 && str[i]<=90){
	str[i]=str[i]+32;
	}
}
printf("%s",str);
return 0;
}
