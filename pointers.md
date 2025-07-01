```
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code hereij t
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a; 
    q=&a[0]+3;
    printf("%d %d %d",(*p)++,(*p)++,* (++p));
    printf("\n%d",*p);
    //q=p+3;
    printf("\n%d ",(*p)++);
    //printf("\n%d ",(*p)++);
    q--;
    printf("\n%d ",(*(q+2))--);
    printf("\n%d \n",*(p + 2)-2);
    printf("\n%d \n",*(p ++ -2)-1);
    
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}
````
