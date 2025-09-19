#include <stdio.h>
int main(){
int a=10;
int b=20;
printf("brefore swaping %d %d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swaping %d %d\n",a,b);
return 0;
}
