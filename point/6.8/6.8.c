#include <stdio.h>

int main()
{
	int a;
	*&a = 25;
	printf("*&a = %d\n", *&a);
}
