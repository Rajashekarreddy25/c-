#include <stdio.h>
/* void increase(int **p) {
 int q = 10;
 *p = &q;
 }
 int main() {
 int r = 20;
 int *ptr = &r;
 increase(&ptr);
 printf("%d", *ptr);
return 0;
 }//10
  */
/*
int main() {
 int x = 10;
 int *p = &x;
 int **q = &p;
 int ***r = &q;
 ***r = 20;
 printf("%d", x);
 return 0;
}//20
*/

/*
 int main() {
 int arr[3] = {0, 1, 2};
 int *ptr;
 ptr = arr;
 printf("%d ", *++ptr);
 printf("%d", *ptr++);
// 1 1 
 }
 */

#include <stdio.h>

int main() {
int n=10;
int arr[n];
arr[0]=1;
printf("%d",arr[0]);
    return 0;
}
