#include  <stdio.h>
#include <string.h>
int rev(char str[],int n){
int  start=0;
int  end=n-1;
while(start<end){
	char temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	start++;
	end--;
}

}
int main(){
char str[]="raja shekar reddy vangala";
int n=strlen(str);
rev(str,n);


int i=0;
while(str[i]!='\0'){
	int j=i;
while(str[i]!=' ' && str[i]!='\0'){
j++;

}
rev(&)
}
return 0;
}
