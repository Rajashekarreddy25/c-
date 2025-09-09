#include <stdio.h>
#include<string.h>
int main(){
char str[10][20]={"rajashekar","mango","orange","apple","banana"};
char temp[20];
 int n=5;
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
 if( strcmp(str[i],str[j])>0){
	strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
	strcpy(str[j],temp);
 }
}
}
for (int i=0;i<n;i++){
printf("%s\n",str[i]);
}
return 0;
}
