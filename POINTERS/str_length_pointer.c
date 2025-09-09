
#include <stdio.h>
#include <string.h>
int main(){
	int cnt=0;
	char str[]="rajashekar";
        char *ptr;
	ptr=&str[0];
	while(*ptr!='\0'){
	cnt++;
	ptr++;
	}
	printf("%d",cnt);
return 0;
}
