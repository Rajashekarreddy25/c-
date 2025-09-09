#include<stdio.h>
int main(){
char str[]="rajashekar";
int cnt=0;
for(int i=0;str[i]!='\0';i++){
cnt++;
}
for (int j=cnt;j>0;j--){
printf("%c",str[j]);
}
return 0;
}
