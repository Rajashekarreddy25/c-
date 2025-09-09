#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char c){
if (top == MAX-1){
printf("stack is overflown:");
return ;
}
 stack[++top]=c;
}
char pop(){
if(top==-1){
return '\0';
}
return stack[top--];
}
int isVaild(char *str){
for(int i=0;i<strlen(str);i++){
char ch=str[i];
if(ch =='(' ||ch == '{'||ch =='[' ){
push(ch);
}
else if(ch ==')' || ch== '}' ||ch == ']' ){
char topchar=pop();
if(( ch == ')' && topchar != '(' )||
   ( ch == '}' && topchar != '{' )||
   ( ch == ']' && topchar != '['  )){

	return 0;
}

}
}
return (top == -1);
}
int main(){
char str[10];
printf("enter a string:");
scanf("%s",str);
if(isVaild(str)){
printf("the string is vaild parenthesis\n");
}
else{
printf("the string is not a valid parenthesis\n");
}
return 0;	
}
