#include <stdio.h>
#include <string.h>
int main(){
	char str[]="rajashekar";
	int n=strlen(str);
	//printf("%d ",n);
        char *ptr;
	ptr=&str[n-1];
	for (int i=n;i>=0;i--){
	printf("%c",*ptr);
	ptr--;
	}
return 0;
}
