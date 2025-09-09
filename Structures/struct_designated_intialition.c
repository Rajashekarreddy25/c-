#include<stdio.h>
struct point{
int p;
int q;
};
int main(){
struct point p1={.p=64,.q=38};
printf("%d %d",p1.p,p1.q);
struct point p2={.q=69};
printf("%d %d",p2.p,p2.q);


}
