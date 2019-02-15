#include <stdio.h>
#include "factorial.h"

int main()
{
	int n = 4;
	int result = factorial(n);
	printf("result = %d\n", result);
}

long factorial(int n)
{
	int result = 1;

	while(n > 1){
		result *= n;
		n -= 1;
	}

	return result;
}
