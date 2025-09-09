

#include <stdio.h>
int main()
{
	int a=10;
	char z='a';
	float f =3.14;
	int *ptr;
	char *ptr1;
	float *ptr2;
	ptr=&a;
	ptr1=&z;
	ptr2=&f;
	int size=sizeof(ptr);
	printf("%d\n",size);
	printf("%d\n",sizeof(a));
	printf("%lu\n",sizeof(ptr1));
	printf("%d\n",sizeof(z));
	printf("%lu\n",sizeof(ptr1));
	printf("%d\n",sizeof(f));
	return 0;
}
