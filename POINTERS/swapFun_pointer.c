#include <stdio.h>
int swap(int a,int b){
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	int temp;
	printf("%d %d\n",*ptr1,*ptr2);
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
printf("%d %d\n",*ptr1,*ptr2);
}
int main(){
int a,b;
printf("enter a 2 no: ");
scanf("%d %d",&a,&b);
swap(a,b);

}




