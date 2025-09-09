#include<stdio.h>
#include<math.h>
int main(){
int arr[]={1,12,-5,-6,50,3};
int k=4;
int sum=0;
float avg=0;
float max_avg=-1e9;
int n=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<n-k;i++){
for (int j=i;j<i+k;j++){
	sum+=arr[j];
}
avg=(float)sum/k;
if (avg>max_avg){
max_avg=avg;
}

}
printf("%f",max_avg);

}
