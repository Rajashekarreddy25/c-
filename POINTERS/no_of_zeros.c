#include <stdio.h>
#include <string.h>
int main(){
	str bin="0101";
	int cnt=0;
	int n=strlen(bin);
	for (int i=0;i<n;i++){
	    if (bin[i]==0){
	    cnt++;
	    }
	}
	
	return 0;
}

