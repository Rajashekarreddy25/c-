#include <stdio.h>
#include <string.h>
int main(){
int len1,len2;
char  str1[30]="rajashekar";
char str2[7]="reddy";
len1=strlen(str1);
len2=strlen(str2);

for (int i=0;i<=len2;i++)
{
	str1[len1+i]=str2[i];
}

//strcat(str1,str2);
printf("%s",str1);
return 0;
}
