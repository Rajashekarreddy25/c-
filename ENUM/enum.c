#include<stdio.h>
enum week {sun,mon,tues,wed,thurs,fri,sat};
/*int fu(){
printf("%d",x);
return 0;
}*/
int main(){
enum week today;
//fun();
today = thurs;
#define x 5
printf("%d",x);
printf("%p\n",&today);
printf("%u",&today);
//fu();
return 0;
}



