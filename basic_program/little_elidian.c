#include <stdio.h>
int main (){
unsigned int a=1;
char *ptr=(char *)&a;
if (*ptr==1){
printf("little endian");
}else{
printf("big endian");
}
return 0;
} 
