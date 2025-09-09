#include <stdio.h>
int main(){
int  size;
printf("enter the no.of ele:\n");
scanf("%d",&size);
int arr[size],freq[size];
printf("enterthe valus:\n");
for (int i=0;i<size;i++){
scanf("%d",&arr[i]);
freq[i]=1;
}
for (int i=0;i<size;i++){
if (freq[i]==0)
	continue;
for (int j=i+1;j<size;j++){
if (freq[j]==0)
	continue;
if (arr[i]==arr[j]){
freq[i]++;
freq[j]=0;
}
}
}

for (int i=0;i<size;i++){
if (freq[i]!=0){
printf("the freq of %d is %d\n",arr[i],freq[i]);
}
}
return 0;
}
