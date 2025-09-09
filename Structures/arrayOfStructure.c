#include<stdio.h>
struct node{
int x;
int y;

};
int main(){
struct node n1[7];
for(int i=0;i<5;i++){
n1[i].x=i;
n1[i].y=i+1;
}
for(int i=0;i<5;i++){
printf("%d %d\n",n1[i].x,n1[i].y);

}
}
