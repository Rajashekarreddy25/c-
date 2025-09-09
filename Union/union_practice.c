#include <stdio.h>
union  rajashekar{
  int rol;
  float marks;
  char name;
 };
int main(){
union rajashekar reddy;
	reddy.name=65;
printf("%c",reddy.name);

return 0;
}
