#include <stdio.h>
#include<stdlib.h>
int main(){
char str[14];
printf("enter a string: ");
//scanf("%s",str);
fgets(str,14,stdin);
int start,end;
printf("enter the start index  and end index:\n");
scanf("%d %d",&start,&end);
printf("entered string is %s\n",str);
for (int i=start;i<=end;i++){
printf("%c",str[i]);
}

	
return 0;
}
