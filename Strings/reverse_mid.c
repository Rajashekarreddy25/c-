#include<stdio.h>
#include<string.h>
int main(){

	char str[]="vivenembedded";
	int l=strlen(str);
	int start=l/2;
	int end =l-1;
           while(start<end){
		char temp=str[start];
	     str[start]=str[end];
	     str[end]=temp;
		start++;
		end--;
	}
	printf("%s",str);
return 0;
}
