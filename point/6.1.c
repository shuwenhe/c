#include <stdio.h>

int main()
{
	int a = 112, b = -1;
	float c = 3.14;
	int *d = &a;
	float *e = &c;

	printf("a = %d\n", a);
	printf("&a = %p\n", &a);
	printf("d = %p\n", d);

	printf("c int = %d\n", c);
	printf("c float = %f\n", c);
	printf("&c = %p\n", &c);
	printf("e = %p\n", e);

	printf("b = %d\n", b);
	printf("&b = %p\n", &b);
}
