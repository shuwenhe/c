#include <stdio.h>
#include "strlen.h"

int main()
{
	char *str = "hello";
	printf("strlen = %d\n", strlen(str));
}

size_t strlen(char *str)
{
	int length = 0;

	while(*str++ != '\0'){
		length += 1;
	}

	return length;
}
