/*
#include <stdio.h>
#include<string.h>
int main(){
char str[]="raja1sheka2r3";
int n=strlen(str);
//printf("%d",n);
int sum=0;
for (int i=0;i<n;i++){
	for (int j=48;j<=57;j++){
	
	if(str[i]==j){
	sum+=j-48;
	}
	}

}
printf("%d",sum);
return 0;
}

*/
#include <stdio.h>
#include<string.h>
int main(){
char str[]="raja1sheka2r3";
int n=strlen(str);
//printf("%d",n);
int sum=0;
for (int i=0;i<n;i++){
	if(str[i]>48 && str[i]<57){
	sum+=str[i]-48;
	}
}
printf("%d",sum);
return 0;
}
