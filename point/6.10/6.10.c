#include <stdio.h>

int main()
{
	int a = 12;
	int *b = &a;
	int **c = &b;

	printf("a = %d\n", a);

	printf("&a = %p\n", &a);
	printf("b = %p\n", b);

	printf("&b = %p\n", &b);
	printf("c = %p\n", c);
}
