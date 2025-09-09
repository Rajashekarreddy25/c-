#include<stdio.h>
int  main(){
        int n,rev=0;
printf("enter a num:\n");
scanf("%d",&n);
int temp=n;
while(temp>0){
int d=temp%10;
 rev=(rev*10)+d;
temp/=10;

}
if (rev==n)
	printf("palindrome");
else
	printf("not a palindrome");
return 0;
}
