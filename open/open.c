#include "open.h"

#define MAX_READ 20

int main()
{
	int fd;
	char buffer[MAX_READ];
	ssize_t numRead;
		
  fd = open("test.txt", O_RDONLY);

	if(-1 == fd)
	  printf("open error!\n");
	else
	  printf("open success!\nfd = %d\n",fd);

	numRead = read(fd, buffer, 10);

	
}

