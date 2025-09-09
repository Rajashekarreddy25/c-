#include <stdio.h>
#include<string.h>
struct point {
int x;
int y;

};
int main(){
struct point p1;
p1.x=10;
p1.y=20;
struct point p2={30,40};
printf("%d %d",p2.x,p2.y);
struct point p3={50};
printf("%d %d",p3.x,p3.y);
return 0;
}
