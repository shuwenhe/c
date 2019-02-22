#include "display_env.h"

extern char **environ;

int main()
{
	char **ep;

	for (ep = environ; *ep != 0; ep++)
	  puts(*ep);
}

