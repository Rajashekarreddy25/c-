#include<stdio.h>
#include<string.h>
int main(){

	char str1[25]="";
	char str2[25]="";
	char res[50]="";

	printf("enter the two strings:\n");
	scanf("%s %s",str1,str2);
	strcpy(res,str1);//copying str1 to the res
	strcat(res,str1);//adding again str1 to res 
	if(strstr(res,str2)!=NULL){ //checking str2 is substring of str2
	printf("the given string are rotation of each other\n");
	}
	else{
	printf("not a rotation\n");
	}

return 0;
}
