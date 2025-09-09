#include<stdio.h>
int main(){
char *fileName="delete_me.txt";
if(remove(fileName)==0){
printf("the file %s deleted successfulllllllly",fileName);
}else{
perror("unable to delete the file");
}
return 0;
}
