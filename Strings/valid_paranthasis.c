#include <stdio.h>
#include <string.h>
int main(){
char str[100];
printf("Enter a string");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int i=0;
while(1){
        int removed=0;
        for(int i=0;str[i]!='\0';i++){
                if((str[i]=='('&&str[i+1]==')')||
                  (str[i]=='{'&&str[i+1]=='}')||
                  (str[i]=='['&&str[i+1]==']')||
                  (str[i]=='<'&&str[i+1]=='>')){
                        int j;
                        for(j=i;str[j+2]!='\0';j++){
                                str[j]=str[j+2];
                        }
                        str[j]='\0';
                        removed=1;
                        break;
                }
}
                if(!removed)
                        break;
        }
if(strlen(str)==0){
        printf("It is a valid string");
}
else{
        printf("It is not a valid string");
}
}
