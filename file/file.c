#include "file.h"

int main()
{
	FILE *stream;
	int fd;

	fd = open("/root/test.c", O_RDONLY);
	if(fd == -1)
	  stream = fdopen(fd, "r");
	if(!stream)
	  printf("error\n");
}
