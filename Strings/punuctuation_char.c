#include<stdio.h>
int main(){
char str[]="rajas!heka@#$%@#$%!";
int cnt=0;
for(int  i=0;str[i]!='\0';i++){
if ((str[i]>=33 && str[i]<=47)||(str[i]>=58 && str[i]<=64)){
cnt++;

}

}
printf("%d",cnt);
return 0;
}
