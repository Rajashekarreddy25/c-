#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char userInput[100];
	char smallest[20]="";
	char longest[20]="";
	char word[20]="";
	int wordIndex=0;
	fgets(userInput,sizeof(userInput),stdin);
	printf("%s\n",userInput);
	int n=strlen(userInput);
	for(int i=0;i<n;i++){
		while(  i < n &&  !isspace(userInput[i]) && isalnum(userInput[i]) ){
		word[wordIndex++]=userInput[i++];
	
		}
		if(wordIndex != 0){
		
		word[wordIndex]='\0';
		
		if(strlen(longest) == 0){
		strcpy(longest,word);
		}

		if(strlen(smallest) == 0){
                strcpy(smallest,word);
                }

		if(strlen(word)>strlen(longest)){
		strcpy(longest,word);
		}

		if(strlen(word)<strlen(smallest)){
                strcpy(smallest,word);
                }
		wordIndex=0;
		}
	}
printf("Longest word: %s\n", longest);
printf("Smallest word: %s\n", smallest);
    return 0;
}
