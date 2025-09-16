#include<stdio.h>
#include<string.h>
void reverse(char *str,int start,int end){
	while(start<end){
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	printf("reverse: %s\n",str);
}
int main(){
	char str_org[]="rajashekar";
	int n=strlen(str_org);
	printf("str_org: %s\n",str_org);
	char temp[50];
	int i=0;
	while(str_org[i]!='\0'){
		temp[i]=str_org[i];
		i++;
	}
	temp[i]='\0';
	printf("temp: %s\n",temp);
	reverse(temp,0,n-1);
	int palindrome=1;
	for (int j=0;j<n;j++){
        	if (temp[j]!=str_org[j]){
			palindrome=0;
		}
	}

	if(palindrome){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
	return 0;
}
