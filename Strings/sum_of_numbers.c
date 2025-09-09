#include<stdio.h>
#include <string.h>
int main(){
char str[]="raja2shekar5reddy2";
int l=strlen(str);
int sum=0;
for (int i=0;i<l;i++){
if (str[i]>=48 && str[i]<=57){
sum+=str[i]-48;
str[i]=sum+48;
}

}
//r (int i=0;i<l;i++){
printf("%s",str);
//

return 0;
}
