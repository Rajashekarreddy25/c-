#include<stdio.h>
void fun(int a,int b,int *large,int *small){
if (a<b){
*large=b;
*small=a;
}
else{
*large=a;
*small=b;
}
}
int main(){
int a,b,small,large;
printf("entee a no: ");
scanf("%d %d",&a,&b);
fun(a,b,&large,&small);
printf("large no: %d small no: %d",large,small);
return 0;
}
